#include<iostream>
using namespace std;
void frog(int arr[n],int n){
    int dp[n];
    dp[0]=0;
    dp[1]=arr[i-1]+arr[i];
    for(int i=2;i<n;i++){
        int jump1=dp[i-1]+(arr[i]-arr[i-1]);
        int jump2=dp[i-1]+(arr[i]-arr[i-1]);
        dp[i]=min(jump1,jump2); 
    }
};
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<frog(arr,n);
  return 0;
}
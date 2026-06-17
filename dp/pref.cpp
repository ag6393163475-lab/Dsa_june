#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int dp[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    dp[0]=arr[0];
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1]+arr[i];
    }
    for(int i=0;i<n;i++){
       cout<<dp[i]<< " ";

    }
    return 0;
}
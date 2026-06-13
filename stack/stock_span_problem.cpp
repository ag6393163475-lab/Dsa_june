#include<iostream>
using namespace std;
int main(){
    // 100,80,60,70,60,75,85
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        int count=1;
        for(int i=j+1;i<n-1;i++){
            if(arr[j]>=arr[i]){
                count=1; 
            }else{ 
                break; 
                count=1;
            
            }  
        }
        cout<<count<<" ";
    }
    return 0;
}
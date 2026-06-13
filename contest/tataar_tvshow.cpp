#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool ans=true;
        for(int i=0;i<n;i++){
            if(i+k<n){
                if(s[i]=='1'){
                    s[i]=0;
                    if(s[i+k]=='1')s[i+k]='0';
                    else s[i+k]='1';

                }
            }else{
                if(s[i]=='1'){
                    ans=false;
                }
            }
        }
        if(ans)
            cout << "yes\n";
        else
            cout << "no\n";
        
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        st.push(a);
    }
    stack<int>st1;
    for(int i=0;i<n;i++){
        st1.push(st.top());
        st.pop();
    }
    for(int i=0;i<n;i++){
        cout<<st1.top()<<endl;
        st1.pop();
    }

    

    return 0;
}
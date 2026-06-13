#include <iostream>
using namespace std;

int main() {
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        q.push(a);
    }
    stack<int>st1;
    for(int i=0;i<n;i++){
        st1.push(q.front());
        q.pop();
    }
    for(int i=0;i<n;i++){
        cout<<st1.top()<<endl;
        st1.pop();
    }

    

    return 0;
}
// INPUT= [ 1 3 2 5 3 4]
// OUTPUT= [3 5 5 -1 4 -1]

#include <iostream>
using namespace std;
int main(){
    int array[6]={1,3,2,5,3,4};
    int answer[6];
    int count;
    for (int i=0;i<6;i++){
        count=0;
        for (int j=i;j<6;j++){
            if (array[i]<array[j]){
                answer[i]=array[j];
                count=1;
                break;
            }

        }
        if(count==0){
            answer[i]=-1;
        }
    }
    for(int i=0;i<6;i++){
        cout<<answer[i]<<" ";
    }
}
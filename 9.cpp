

           //find maximum element in array
#include<iostream>
using namespace std;
int main(){
    int a[5]={12,10,13,16,15};
    int max=a[0];
    for(int i=0;i<7;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max<<endl;

    return 0;
}

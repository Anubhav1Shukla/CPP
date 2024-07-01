
//Sum of An array elements

#include<iostream>
using namespace std;
int main(){
    int A[5]={10,12,34,56,23};
    int sum=0;
    for(int i=0;i<=5;i++){
        sum=sum+A[i];
    }
    cout<<sum<<endl;
}
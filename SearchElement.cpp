#include<iostream>
using namespace std;



int search(int arr[],int k,int key){
    for(int i=0;i<k;i++){
        if (arr[i]==key){
            return i;
        }
       
    }
     return -1;

}


int main(){
    int arr[5]={4,2,6,8,9};
    int key=10;

    cout<<"Element index: "<<search(arr,5,key);
}
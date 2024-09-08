#include<bits/stdc++.h>
using namespace std;

void iSort(int arr[],int n){
        for(int i=0;i<n;i++){
            int key=arr[i];
            int j=i-1;

            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
}


int main(){
    int arr[]={20,10,15,30,29},n=5;
    iSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
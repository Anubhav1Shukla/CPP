#include<bits/stdc++.h>
using namespace std;




void BubbleSort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                }
            }
        }
}
int main(){
    int arr[]={10,2,25,20,90},n=5;
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//-->Time Complexity-->0(n^^2)
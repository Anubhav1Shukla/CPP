#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int key,int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}


int main(){
    int arr[]={10,22,31,40,58},n=5;
    int key=22;
    int result=BinarySearch(arr,key,n);
    if(result!=-1){
        cout<<"Index found: "<<result<<endl;
    }else{
        cout<<"Index not found: "<<endl;
    }
}
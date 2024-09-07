// #include<bits/stdc++.h>
// using namespace std;
// //Iterative approch
// int BinarySearch(int arr[],int key,int n){
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==key){
//             return mid;
//         }else if(arr[mid]>key){
//             high=mid-1;
//         }else{
//             low=mid+1;
//         }
//     }
//     return -1;
// }


// int main(){
//     int arr[]={10,22,31,40,58},n=5;
//     int key=22;
//     int result=BinarySearch(arr,key,n);
//     if(result!=-1){
//         cout<<"Index found: "<<result<<endl;
//     }else{
//         cout<<"Index not found: "<<endl;
//     }
// }]

#include<bits/stdc++.h>
using namespace std;

int bSearch(int arr[],int low,int high,int key){
    if(low>high)
        return -1;

    int mid=(low+high)/2;

    if(arr[mid]==key)
        return mid;

    else if(arr[mid]>key) 
        return bSearch(arr,low,mid-1,key);

    else
         return bSearch(arr,mid+1,high,key);
}


int main(){
    int arr[]={20,31,48,56,69},n=5;
    int key=69;
    cout<<bSearch(arr,0,n-1,key);
   
}
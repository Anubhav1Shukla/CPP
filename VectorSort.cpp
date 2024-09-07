// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={19,15,11,10,16},n=5;
//     sort(arr,arr+n);

//     for(int x:arr){
//         cout<<x<<" ";
//     }
   
//     sort(arr,arr+n,greater<int>());
//      cout<<endl;
//      for (int x:arr){
//         cout<<x<<" ";
//      }
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={22,12,13,44,32};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<endl;
    for(int x:v){
        cout<<x<<" ";
    }
}
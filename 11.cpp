
                    //jab elements sorted order me rahega tabhi tum binary serach perform kar sakte ho 
#include<iostream>
using namespace std;
int main(){
    int a[6]={10,11,12,13,14,15};
    int key;
    cin>>key;
    int l=0,h=5;

// tc--> o(log n)
    while(l<=h){
    int mid=(l+h)/2;
    if(key==a[mid]){
        cout<<"Found: "<<mid<<endl;
        return 0;
    } else if(key<a[mid]){
        h=mid-1;
    }else{
        l=mid+1;
    }    
    }
    cout<<"Not found!"<<endl;
}

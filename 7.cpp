#include<iostream>
using namespace std;
int main(){

    // int A[5]={2,3,4};

    // for(int i=0;i<5;i++){
    //     cout<<A[i]<<endl;
    // }
    // for(int x:A){
    //     cout<<x<<endl;  //for each loop jo array ka size hota hai uske according elements ko print karta hai
    // }
    // for(auto x:A){
    //     cout<<x<<endl; //auto ka use tab karte hai jab hame koi bhi datatype pata na ho tab auto automatic datatype find kar leta hai 
    // }

    // return 0;
    // char A[]={'A',66,'C',68};
    // for(auto x:A){
    //     cout<<x<<endl;
    // }
    //output A B C D


    //for each
    int A[5]={1,2,3,4,5};
    // for(int x:A)
    //     cout<<++x<<endl;   //isme array ke ek copy ban jati hai
    
    for(int &x:A){
        cout<<++x<<endl;  //isme jo array rahta hai usi array ko modify karta hai naya array nahi create hota
    }

}
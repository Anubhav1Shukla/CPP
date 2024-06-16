//Bill Amount
#include<iostream>
using namespace std;
int main(){

    float BillAmount;
    float discount=0.0;

    cout<<"Enter Bill Amount: "<<endl;
    cin>>BillAmount;
    if(BillAmount >=500){
        discount=BillAmount*20/100;
    } else if(BillAmount>=100 && BillAmount<=500) {
        discount=BillAmount*10/100;
    }


    cout<<"Bill Amount: "<<BillAmount<<endl;
    cout<<"Discount: "<<discount<<endl;
    cout<<"Dicounted Amount is : "<<BillAmount-discount<<endl;

}
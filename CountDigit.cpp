#include <iostream>
using namespace std;

//this programm is used to find how many didgits in your give n input 

int countDigit(int k){
    int res=0;
    if (k==0) return 1;
    while(k!=0){
        k=k/10;
        res++;
    }
    return res;
}

int main(){
    int n=0;
    cout<<"No of digits is: "<<countDigit(n)<<endl;
}
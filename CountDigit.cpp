#include <iostream>
using namespace std;


int countDigit(int k){
    int res=0;
    while(k!=0){
        k=k/10;
        res++;
    }
    return res;
}

int main(){
    int n=56774;
    cout<<"Number is "<<countDigit(n)<<endl;
}
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main(){
    //Declaring vector<data_type>array name
    vector<int>arr={1,2,3,4,5};


    //Declaring iterator to vector
    vector<int>::iterator ptr;


    for(ptr=arr.begin();ptr<arr.end();ptr++){
            cout<< *ptr<< " "<<endl;
    }
}
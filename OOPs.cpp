#include<bits/stdc++.h>
using namespace std;
class Person{
    private:
    int age;
    string name;
    string address;


    public:
    void input(){
        cout<<"Enter Age: "<<endl;
        cin>>age;
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter address: "<<endl;
        cin>>address;
    }

    void show(){
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

main(){
    Person Anubhav,Abhay,Anmol;

    Anubhav.input();
    Anubhav.show();

    Abhay.input();
    Abhay.show();


    Anmol.input();
    Anmol.show();
}
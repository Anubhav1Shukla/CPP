#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
        cout<<"Vector size is :"<<v.size()<<endl;
        for(int i=0;i<v.size();++i){
            cout<<v[i]<<" ";

        }
        cout<<endl;
    }





int main(){

    // //Pair
    // pair<int,string> p;
    // // p=make_pair(12,"Anubhav");
    // p={2,"Anubhav"};
    // cout<<p.first<<" "<<p.second<<endl;


    //vector

    

    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    // int n;
    // cout<<"Enter vector size: "<<endl;
    // cin>>n;

    // cout<<"Enter Numbers: "<<" ";
    // for(int i=0;i<n;++i){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }

    printVector(v);
}
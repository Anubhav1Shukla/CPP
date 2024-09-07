#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int> > &v){
        cout<<"Vector size is :"<<v.size()<<endl;
        for(int i=0;i<v.size();++i){
            cout<<v[i].first<<" "<<v[i].second;

        }
        cout<<endl;
    }





// int main(){

//     // //Pair
//     // pair<int,string> p;
//     // // p=make_pair(12,"Anubhav");
//     // p={2,"Anubhav"};
//     // cout<<p.first<<" "<<p.second<<endl;


//     //vector

    

//     // vector<int> v;
//     vector<string>v;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         string s;
//         cin>>s;
//         v.push_back(s);
//     }

//     // v.push_back(5);
//     // v.push_back(6);
//     // // v.pop_back();


//     // vector<int> &v2=v;
//     // v2.push_back(5);
//     // printVec(v);
//     // printVec(v);
//     // printVec(v2);
//     // int n;
//     // cout<<"Enter vector size: "<<endl;
//     // cin>>n;

//     // cout<<"Enter Numbers: "<<" ";
//     // for(int i=0;i<n;++i){
//     //     int x;
//     //     cin>>x;
//     //     v.push_back(x);
//     // }

//     printVector(v);
// }

int main(){
    vector<pair<int,int > > v={{1,2},{2,3},{3,4}};
    printVec(v);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        // v.push_back(make_pair(x,y));
    }
}
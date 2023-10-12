#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    void printVec( vector<int> sam){
        cout<<"the size of vector"<< sam.size()<<endl;
        for (int i = 0; i < sam.size(); i++)
        {
            cout<<sam[i]<<" ";
        }
        cout<<endl;
        
    }
int main(){
    cout<<"hi"<<endl;
    // pair<int, string> p;
    // p = {2, "abcds"};
    // cout<<p.first<<endl<<p.second<<endl;
    pair<int, int> p[3];
    p[0] = {1,2};
    p[1] = {2,2};
    p[2] = {3,2};
    for (int i = 0; i < 3; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;   
    }


    vector<int> sam (10, 22);
    sam.push_back(23);
    sam.push_back(23);
    sam.push_back(23);
    sam.push_back(23);
    // cout<<sam<<endl;
    printVec(sam);
    
    return 0;
}
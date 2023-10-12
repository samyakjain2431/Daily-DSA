#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool possibleSol(vector<int> &boards, int k, int mid){
    int boardCount = 1;
    int boardSum = 0;
    for (int i = 0; i < boards.size(); i++)
    // {   cout<<"i'm for loop"<<endl;
        if(boardSum + boards[i]<= mid){
            boardSum += boards[i];
        }
        else{
            boardCount++;
            if(boardCount>k || boards[i]>mid){
                return false;
            }
            boardSum = boards[i];
        }
    }
    return true;
    

}

int paintersProblem(vector<int> &boards, int k){
    int s = 0;
    int ans = 0; 
    int e = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        e = e+ boards[i];
    }
    int mid = s + (e-s)/2;
    while(s<=e){
        // cout<<"i'm while loop"<<endl;
        if(possibleSol(boards, k, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;

}


int main(){
    vector<int> boards = {5,15,25,35};
    cout<<boards.size()<<endl;
    cout<<paintersProblem(boards, 2)<<endl;
    
    
    return 0;
}
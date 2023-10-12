#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isCowsPossible(vector<int> &cows, int n, int k, int mid){
    int cowNum = 1;
    int cowStall = cows[0];
    for (int i = 0; i < n; i++)
    {
        if(cows[i] - cowStall >= mid){
            cowNum++;
            cowStall = cows[i];
        }
        if(cowNum == k)return true;
    }
    return false;
    

}

int aggressiveCows(vector<int> &cows, int k){
    int n = cows.size();
    int ans;
    int s = cows[0];
    int e = cows[n-1] - s;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isCowsPossible(cows,n, k, mid)){
           ans = mid;
           s = mid+1; 
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    
    vector<int> stl = {1,2,4,8,9};
    cout<<"the largest min distance is : "<<aggressiveCows(stl, 2)<<endl;
    
    return 0;
}
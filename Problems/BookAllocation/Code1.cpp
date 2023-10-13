#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossibleSol(vector<int> &arr, int n, int mid){
    int studCount = 1, pageSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studCount ++;
            if(studCount>n || arr[i]>mid ){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookAllocation(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());

    int s = arr.front();
    int e = 0, mid, ans =0;
    for (int i = 0; i < arr.size(); i++)
    {
        e += arr[i];
    }
    
    mid = s+(e-s)/2;
    while(s<=e){
        if(isPossibleSol(arr, n, mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int>arr = {10, 20, 30, 40, 50};
    int ans = bookAllocation(arr, 2);
    cout<<"the min of max between pages divided between students: \n"<<ans<<endl;
    
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool canWePlace(vector<int> &arr, int n, int mid){
    int cowCount = 1, lastPos = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i]- lastPos>= mid ){
            cowCount++;
            if(cowCount == n){
                return true;
            }
            lastPos = arr[i];
        }
        
    }
    
    return false;
}


int aggressiveCows(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    int s = arr.front() , ans;
    int min = arr.front();
    int max = arr.back();
    int e = max-min;
    int mid = s - (e-s)/2;
    while(s<=e){
      if(canWePlace(arr, n, mid)){
        ans = mid;
        s = mid+1;
      }  
      else{
        e = mid -1;
      }
      mid = s+(e-s)/2;
    }

    return ans;
}


int main(){
    vector<int> arr= {4, 2,1, 9,8};
    int ans = aggressiveCows(arr, 3);
    cout<<"The max of min distance between cows : \n"<<ans<<endl;
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<int> arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if(pageSum + arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            // cout<<arr[i-1]<<endl;
            pageSum = arr[i];
        }
    }
    return true;
    
}

int bookAllocation(vector<int> arr, int n, int m){
    int s = 0;
    int sum=0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s = (e-s)/2;

    while(s<=e){
        if(isPossibleSolution(arr, n, m, mid)){
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
    
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int minOfMax = bookAllocation(arr, arr.size(), 2);
    cout<<minOfMax<<endl;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(sum<minOfMax){
            sum+= arr[i];
        }
        else{
            sum = arr[i];
            cout<<"new page starts at "<<sum<< " at position "<<i<<endl;
            break;
        }
    }
    
    
    
    return 0;
}
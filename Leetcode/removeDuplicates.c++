#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        vector<int> newNums;
        int currentElem = nums[0];
              // cout<<currentElem<<endl;
        newNums.push_back(currentElem);
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]==currentElem){
              continue;
            }
            else{
              currentElem = nums[i];
              // cout<<currentElem<<endl;
              newNums.push_back(nums[i]);
            }
            
        }
        cout<<'[';
        for(int i = 0; i<newNums.size(); i++){
          cout<<newNums[i]<<",";
        }
        cout<<']';
      return 0;
}

int main(){
    
    vector<int> nums = {1,1,1,2,3,4,4,4,5,6,6,6,7,7,7,8,8,9};
    removeDuplicates(nums);
    
    return 0;
}
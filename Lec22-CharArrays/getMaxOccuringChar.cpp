#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string s){
    int arr[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int num = 0;
        if(s[i]>= 'a' && s[i]<= 'z'){
            num = s[i] - 'a';
        }
        else{
            num = s[i] - 'A';

        }
        arr[num]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>maxi){
            ans = i;
            maxi = arr[i];
        }
    }
    return char(ans+ 'a');
    
    
}

int main(){
    
    string s;
    cout<<"enter your string : ";cin>>s;
    cout<<getMaxOccuringChar(s)<<endl;
    return 0;
}
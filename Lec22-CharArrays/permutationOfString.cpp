#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int k = 0;
bool checkPerm(int a1[26], int b1[26], int len){
    k++;
        for(int i = 0; i<26; i++){
            if(a1[i] != b1[i])return false;
        }
        cout<<"string matched from index "<<k-1<<" upto "<< k-2+len<<endl;
        return true;
    }

bool permutationOfString(string s1, string sub){
    
    int i = 0; int countSub[26] = {0}, countMain[26] = {0};
    for (int i = 0; i < sub.length(); i++)
    {
        // cout<<"enter 1st";
        int index = sub[i] -'a';
        countSub[index]++;
        // cout<<"exit 1st";
        // cout<<endl;
    }
    
    int windowSize = sub.length();
    //for first window
    while (i < windowSize && i<s1.length())
    {
        // cout<<"enter 2";
        countMain[s1[i]-'a']++;
        i++;
        // cout<<"exit 2"<<endl;
    }
    for (int i = 0; i < 26; i++)
    {
        // cout<<countMain[i];
    }
    // cout<<endl;
    for (int i = 0; i < 26; i++)
    {
        // cout<<countSub[i];
    }
    // cout<<endl;
    
    //checking
    if( checkPerm(countMain, countSub, sub.length()) ){
        // cout<<"checked"<<endl;
        return 1;
    }
    while (i<s1.length())
    {
        int newIndex  = s1[i] - 'a';
        countMain[newIndex] ++;
        int oldIndex = s1[i-windowSize] -'a';
        countMain[oldIndex]--;
        i++;
        if(checkPerm(countMain, countSub, sub.length())){return 1;}
    }
    
    
    return 0;
    
}

int main(){
    
    string s1,  sub;
    cout<<"enter main string : ";
    cin>>s1;
    cout<<"enter sub string : ";
    cin>>sub;
    permutationOfString(s1, sub);

    
    return 0;
}


//Notes :
// 1. It only finds first occurance 
// 2. It provides starting and ending indexes of occurance
// 3. It works only for lowercase

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool valid( char ch){
    if((ch >= 'a' && ch<='z')|| (ch >='A' && ch<= 'Z')||(ch >='0' && ch<= '9')){
        return true;
    }
    return false;
}

void lowerCase(string &temp){
    for (int i = 0; i < temp.size(); i++)
    {
        if ((temp[i] >= 'a' && temp[i]<= 'z')||(temp[i]>= '0' && temp[i]<='9'))
        {
            continue;
        }
        else{
            char ch = temp[i] -'A' + 'a';
            temp[i] = char(ch);
        }
    }
    
    
}

bool checkValidPalindrome(string s){
    string temp;
    
    //checking valid character
    for (int i = 0; i < s.size(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
        
    }

    //convert to lowercase
    lowerCase(temp);
    cout<<"The string is now : "<<temp<<endl;

    //checking palindrome
    int start = 0;
    int e = temp.size()-1;
    while(start<e)
    {
        if(temp[start]!= temp[e]){
            return false;
        }
        start ++;
        e--;
    }
        return true;
}
 
int main(){
    
    string s;
    cout<<"Enter your string : ";
    getline(cin, s);
    bool ans = checkValidPalindrome(s);
    if (ans)
    {
        cout<<"Yes, it is a valid Palindrome"<<endl;
    }
    else{
        cout<<"No, it's not a valid Palindrome"<<endl;
    }
    
    return 0;
}
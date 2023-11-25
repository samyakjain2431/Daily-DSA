#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string replaceSpacesTo40(string str){
    string newStr;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==' ')
        {
            newStr.push_back('@');
            newStr.push_back('4');
            newStr.push_back('0');
            continue;
        }
        newStr.push_back(str[i]);
    }
    return newStr;
    
}

int main(){
    
    string str;
    cout<<"enter the string : ";
    getline(cin, str);
    string newStr = replaceSpacesTo40(str);
    cout<<newStr<<endl;
    
    return 0;
}
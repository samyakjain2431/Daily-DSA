#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
    int s = 0;
    int e = str.length()-1;
    while(s<e){
        swap(str[s++], str[e--]);
    }
    return str;
    

}

int main(){
    
    string str;
    cout<<"enter your string : ";
    getline(cin, str);
    // cout<<str<<endl;
    string str2 = reverseString(str);
    cout<<str2<<endl;
    
    return 0;
}
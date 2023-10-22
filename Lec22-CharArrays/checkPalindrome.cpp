#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char a[]){
    
    int length = 0;
    for(int i = 0; a[i] != '\0'; i++)
    {
        length++;
    }
    int s = 0, e = length-1;
    while (s<e)
    {
        if(a[s++] != a[e--]){
            return false;
        }
    }
    return  true;
}

int main(){
    
    char a[10] ;
    cout<<"enter name : "<<endl;
    cin>>a;
    int result = checkPalindrome(a);
    cout<<result;
    
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void displayArray(vector<char> ch){
    for (int i = 0; i < ch.size(); i++)
    {cout<<ch[i]<<" ";}
    cout<<endl; 
}

void reverseWords(vector<char> ch){
    vector<char> newChar;
    for (int i = ch.size()-1; i >=0; i--)
    {
        if (ch[i]== ' ')
        {
            for (int j = i+1; (ch[j]!='\0') &&(ch[j]!= ' '); j++)
            {
                newChar.push_back(ch[j]);
            }
            newChar.push_back(' ');
            
            
        }
        if(i==0){
            for (int j = 0; (ch[j]!=' ') && (ch[j]!= '\0'); j++)
            {
                newChar.push_back(ch[j]);
            }
            
        }
        
    }
    displayArray(newChar);
}

int main(){
    
    vector<char> ch = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    reverseWords(ch);
    //It's time complexity is O(n2);
    
    
    return 0;
}
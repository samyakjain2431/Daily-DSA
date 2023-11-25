//This is to remove all occurances of a substring
//Now, do it again with str.find() and str.erase() and while

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removeSubstring(string str, string sub){
    string newStr;
    int i = 0;
    while(i<str.size())
    {
        if (str[i] == sub[0])
        {
            int t = i;
            for (int j = 1; j < sub.size(); j++)
            {
                if(str[i] == sub[j]){
                    cout<<"removing "<<str[i]<<endl;
                    i++;
                }
            }
            continue;
        }
        cout<<"\t\t\tentering "<<str[i]<<endl;
        newStr.push_back(str[i]);
        i++;
        
    }
    return newStr;
    

}

int main(){
    
    string str, sub;
    cout<<"Enter you string here :\n";
    getline(cin, str);
    cout<<"Enter Substring : ";
    cin>>sub;
    string newstr = removeSubstring(str, sub);
    cout<<newstr<<endl;
    
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
using namespace std;

string reverse(string word){
    int i=0,j=word.length()-1;
    while(i<j){
        swap(word[i],word[j]);
        i++;
        j--;
    }
    return word;
}

int main()
{
    //Approach using string stream
    string s = "Hello World";
    stringstream s1(s);
    string word;

    while( s1 >> word ) {
        cout<< reverse(word);
        cout<<" ";
    }

    //Approach using stack
    // string s = "Hello World";
    // stack<char> s1;
    // string s2;
    // for(int i=0; i<s.length() ; i++){
    //     if(s[i] == ' ' || i == s.length()-1 ){
    //         if(i == s.length()-1 )
    //             s1.push(s[i]);
    //         while(!s1.empty()){
    //             s2.push_back(s1.top());
    //             s1.pop();
    //         }
    //         s2.push_back(' ');
    //     }
    //     else
    //         s1.push(s[i]);
    // }
    // cout<<s2;
    return 0;
}
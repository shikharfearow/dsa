#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

void Nqueen(int col, vector<vector<string>> &ans,vector<string> &board,int n,vector<int> left,vector<int> upper,vector<int> lower){
    if(col == n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(left[row] ==0 && upper[n-1 + col-row]==0 && lower[row+col]==0){
            board[row][col] = 'Q';
            left[row] = 1;
            upper[n-1 + col-row ] = 1;
            lower[row+col]=1;
            Nqueen(col+1,ans,board,n,left,upper,lower);
            board[row][col] = '.';
            left[row] = 0;
            upper[n-1 + col-row ] = 0;
            lower[row+col]=0;
        } 
    }
}

int main(){
    int n = 4;
    string s(n,'.');
    vector<vector<string>> ans;
    vector<string> board(n,s);
    vector<int> left(n,0);
    vector<int> upper(2*n-1,0);
    vector<int> lower(2*n-1,0); 
    Nqueen(0,ans,board,n,left,upper,lower);
    for(auto b: ans){
        for(auto s: b)
            cout<<s<<endl;
        cout<<"---------------"<<endl;
    }
    return 0;
}
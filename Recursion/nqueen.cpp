#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

bool qsafe(vector<string> board,int row,int col, int n){
    
    int duprow = row;
    int dupcol = col;

    //chek left
    while(col>=0){
        if(board[row][col] == 'Q')
            return false;
        col--;
    }
    row = duprow;
    col = dupcol;

    //check upward diagonal
    while(row>=0 && col>=0){
        if(board[row][col] == 'Q')
            return false;
        row--;
        col--;
    }

    row = duprow;
    col = dupcol;
    //check downward diagonal
    while(row<n && col>=0){
        if(board[row][col] == 'Q')
            return false;
        row++;
        col--;
    }
    return true;
}

void Nqueen(int col, vector<vector<string>> &ans,vector<string> &board,int n){
    if(col == n){
        ans.push_back(board);
        return;
    }

    for(int row=0;row<n;row++){
        if(qsafe(board,row,col,n)){
            board[row][col] = 'Q';
            Nqueen(col+1,ans,board,n);
            board[row][col] = '.';
        } 
    }
}

int main(){
    int n = 4;
    string s(n,'.');
    vector<vector<string>> ans;
    vector<string> board(n,s);
    Nqueen(0,ans,board,n);
    for(auto b: ans){
        for(auto s: b)
            cout<<s<<endl;
        cout<<"---------------"<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void printsol(vector<vector<int>>&board , int n ){
    for(int i=0; i<n; i++){
        for(int j=0 ; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
bool issafe(int row, int col,vector<vector<int>>&board , int n){
    int i = row;
    int j = col;
    // checking row

    while(j>=0){
        if(board[i][j]== 1){
            return false;
        }
        j--;
    }
    // checking upper left diagonal
    i= row;
    j= col;

    while(i>=0 && j >= 0){
        if(board[i][j]== 1){
            return false;
        }
        i--;
        j--;


    }
    // checking bottom left diagonal
    i=row;
    j=col;

    while(i < n && j >= 0){
        if(board[i][j]==1){
            return false;
        }
        i++;
        j--;

    }
    return true;

}

void solve(vector<vector<int>>&board, int col , int n){
    // base case for RE
    if(col >= n){
        printsol(board , n);
        return;
    }
    // ak case solve krna h baki RE sambhal lega 

    for(int row =0; row <n ; row++){
        if(issafe(row , col, board , n)){
            // rakh do
            board[row][col]=1;
            //RE solution dekh lega
            solve(board, col+1, n);
            //back tracking
            board[row][col]=0;
        }
    }
}

int main(){

    int n=4;

    vector<vector<int>> board(n, vector<int>(n, 0));
    int col =0;
    solve(board, col ,n);
    return 0;
}
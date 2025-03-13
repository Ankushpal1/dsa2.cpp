#include<iostream>
#include<limits.h>

using namespace std;

int getmax(int arr[3][3], int row, int col,){
    maxi =INT_MIN;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]<maxi){
                maxi=arr[i][j];
            }

        }
    }
    return maxi;
}
int main()
{
int maxi(int arr, row ,col);

    cout<<maxi(arr, row, col)<<endl
}
#include<iostream>
using namespace std;

int main(){

    int arr[]={20, 22, 21, 26,27};
    int size =sizeof(arr)/sizeof(arr[0]);
    int max=0;

    for(int i=0; i<size; i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }

    cout<<"gratest element in arry is :"<<max<<endl;
}
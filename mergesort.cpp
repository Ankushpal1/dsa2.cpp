#include<iostream>
using namespace std;

int merge(int* arr,int  s,int  e){

    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int* left = new int[len1];
    int* right = new int[len2];

    int k= s;
    for(int i=0; i<len1; i++){
        left[i]=arr[k];
        k++;
    }
     k= mid+1;
    for(int i=0; i<len2; i++){
        right[i]=arr[k];
        k++;
    }
    int leftindex = 0;
    int rightindex= 0;
    int mainarryindex = s;

    while(leftindex < len1 && rightindex < len2){
        if(left[leftindex]< right[rightindex]){
        arr[mainarryindex++] = left[leftindex++];
        }
        else{
            arr[mainarryindex++]= right[rightindex++];
        }
    }
    while(leftindex < len1){
        arr[mainarryindex++] = left[leftindex++];
    }
    while(rightindex < len2){
        arr[mainarryindex++]= right[rightindex++];
    }
    

    
}

void mergesort(int* arr, int s, int e){
    //base for mergessort
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;

    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);

    merge(arr, s, e);
    
}

int main(){
    int arr[]= { 4,13, 7,14,95,5,15};
    int n= 7;
    int s=0;
    int e = n-1;

    mergesort(arr, s, e);

    for(int i=0; i< n; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    return 0;


}
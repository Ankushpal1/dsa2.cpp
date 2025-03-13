#include<iostream>
using namespace std;
void merge(int *arr, int s, int mid, int e){

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *left = new int[len1];
    int *right = new int[len2];

    int k=s;
    for(int i=0; i<=len1; i++){
        left[i]=arr[i] ;
        k++;
    }
    k= mid+1;
       for(int i=0; i<=len2; i++){
        right[i]=arr[i] ;
        k++;
    }
    int leftindex= 0;
    int rightindex=0;
    int mainarrindex= s;

    while(leftindex <len1 && rightindex< len2){
        if(left[leftindex]> right[rightindex]){
            arr[mainarrindex]= left[leftindex];
            mainarrindex++;
            leftindex++;
        }
        else{
            arr[mainarrindex++]= right[rightindex++];
           
        }
    }
    while(leftindex = len1){
        arr[mainarrindex++]= left[leftindex++];
    }
    while(rightindex = len2){
        arr[mainarrindex++]= right[rightindex++];
    }



    
}
void mergesort(int *arr, int s, int e){
    //basecase
    if(s>=e){
        return;
    }
    int mid=(s+(e-s))/2;

    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);

    merge(arr, s, mid, e);

}

int main(){

    int arr[]={2,6,7,6,7,8,98};
    int n = 7;
    int s=0;
    int e= n-1;

    mergesort(arr, s, e);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
    return 0;


}
#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int target){
    int start=0;
    int end= size-1;
    int mid=(start + end)/2;


    while(start<=end){
        int element= arr[mid];
        if(element==target){
            return mid;
        }
        else if(element>target){
            end = mid+1;

        }
        else{
            start= mid-1;
        }

        mid = (start + end)/2;
    }
    
}
int main()
{
    int arr[]={2,5,6,10,20,25};
    int size = 6;
    int target = 10;

    int findelement= binarysearch(arr, size, target);

    if(findelement==-1){
        cout<<"element not found "<<endl;
    }
    else
    {
        cout<<"element found at index "<<findelement<<endl;
    }
    return 0;
}
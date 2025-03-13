#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v{10,20,30,40,50,60,70,80}

    if(binary_search(v.begin, v.end, 30)){
        cout<<"element found"<<endl;

    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;

}
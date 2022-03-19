#include<iostream>
#include<climits>
using namespace std;

int main(void){
    int arr[] = {5,6,2,4,7,5,6,3,8,5,6,4,9,5,2,4,5,6};

    int minEle = INT_MAX;
    int maxEle = INT_MIN;

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]<minEle){
            minEle=arr[i];
        }
        if(arr[i]>=maxEle){
            maxEle=arr[i];
        }
    }

    cout<<"Max Element is : "<<maxEle<<"\n";
    cout<<"Min Element is : "<<minEle<<"\n";

    return 0;
}
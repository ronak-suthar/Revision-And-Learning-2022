#include<iostream>
#include<climits>
using namespace std;

//Maximum Sum Subarray of size k
int slidingWindowMax(int* arr,int size,int k){
    int result = INT_MIN;

    int i=0;//window start index
    int j=0;//window end index
    int windowSum = 0;

    while(j<size){
        windowSum += arr[j];

        int windowSize = j-i+1;

        if(windowSize<k){
            j++;
        }    
        else if(windowSize==k){
            result=max(result,windowSum);

            windowSum-=arr[i];
            i++;
            j++;
        }
    }

    return result;
}
int main(void){
    int arr[] = {1,2,3,4,5,6};

    cout<<"Max Subarray Sum of Size 3 is : "<<slidingWindowMax(arr,6,3)<<"\n";
    
    return 0;
}
#include<iostream>
#include<climits>

using namespace std;

int largestSubArraySumK(int* arr,int size,int target){
    int result = INT_MIN;

    int wSum = 0;
    int i=0,j=0;
    

    while(j<size){
        wSum += arr[j];

        if(wSum<target){
            j++;
        }
        else if(wSum==target){
            result = max(result,j-i+1);
            j++;
        }
        else{
            while(wSum>target){
                wSum -= arr[i];
                i++;
                if(wSum==target){
                    result = max(result,j-i+1);
                }
                
            }
            j++;
        }
    }

    return result;
}
int main(void){
    int arr[] = {10, 5, 2, 7, 1, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<largestSubArraySumK(arr,size,15)<<"\n";

    return 0;
}
#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

typedef pair<int, int> pdi; // pair diff index


struct cmp{
     bool operator()(const pdi& a,const pdi& b){
         if(a.first<b.first){
             return true;
         }
         else if(a.first==b.first){
             if(a.second>b.second){
                 return false;
             }
             else{
                 return true;
             }
         }
         else{
            return false; 
         }
     }
};

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    //           2  1  0  1  2
    //           0  1  2  3  4
    int k = 4, x = 3;

    priority_queue<pdi,vector<pdi>,cmp> maxHeap;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {   
        maxHeap.push({abs(x - arr[i]), arr[i]});

        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }

    while (!maxHeap.empty())
    {
        cout << maxHeap.top().second << "\n";
        maxHeap.pop();
    }

    return 0;
}
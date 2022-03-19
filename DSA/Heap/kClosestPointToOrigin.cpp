#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
    vector<vector<int>> arr{{3,3},{5,-1},{-2,4}};

    int k = 2;

    priority_queue<pair<int,int>> heap;//distance,index

    for(int i=0;i<arr.size();i++){
        int distance = arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1];

        heap.push({distance,i});

        if(heap.size()>k){
            heap.pop();
        }
    }

    while(!heap.empty()){
        cout<<"["<<arr[heap.top().second][0]<<","<<arr[heap.top().second][1]<<"]\n";
        heap.pop();
    }

    return 0;
}
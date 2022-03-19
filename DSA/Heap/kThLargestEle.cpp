#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int arr[] = {10, 2, 5, 14, 3, 8, 55};
    int k = 3;
    priority_queue<int,vector<int>,greater<int>> minHeap;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        minHeap.push(arr[i]);

        if (minHeap.size() > k)
        {
            minHeap.pop();
        }
    }

    cout << minHeap.top() << "\n";

    return 0;
}
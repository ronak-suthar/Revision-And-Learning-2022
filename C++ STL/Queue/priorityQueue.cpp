#include <iostream>
#include <queue>

using namespace std;

int main(void)
{   
    //By Default Priority Queue Acts as Max Heap
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(2);
    maxHeap.push(20);
    maxHeap.push(11);

    while (!maxHeap.empty())
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    cout << "\n";

    //To make priority queue act as min heap we use below syntax

    priority_queue<int,vector<int>,greater<int>> minHeap;


    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(2);
    minHeap.push(20);
    minHeap.push(11);

    while (!minHeap.empty())
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

    cout << "\n";

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};

    int cost = 0;

    priority_queue<int, vector<int>, greater<int>> heap;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        heap.push(arr[i]);
    }

    while (heap.size()>1)
    {
        int a = heap.top();
        heap.pop();
        int b = heap.top();
        heap.pop();

        cost += (a + b);

        heap.push(a + b);
    }

    cout << "Cost is : " << cost << "\n";

    return 0;
}
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int arr[] = {5, 2, 8, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    priority_queue<int> maxHeap(arr, arr + size);

    for (int i = size - 1; i >= 0; i--)
    {
        arr[i] = maxHeap.top();
        maxHeap.pop();
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    cout << "\n";

    return 0;
}
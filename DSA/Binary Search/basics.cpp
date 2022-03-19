#include <iostream>

using namespace std;

int binarySearch(int *arr, int size, int query)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == query)
        {
            return mid;
        }
        else if (arr[mid] < query)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return false;
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << binarySearch(arr, sizeof(arr) / sizeof(arr[0]), 5) << "\n";

    return 0;
}
#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int size;

    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int result[size];

    stack<int> s;

    for (int i = size - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            result[i] = -1;
        }
        else
        {
            if (s.top() > arr[i])
            {
                result[i] = s.top();
            }
            else
            {
                while (!s.empty() && s.top() < arr[i])
                {
                    s.pop();
                }

                if (s.empty())
                {
                    result[i] = -1;
                }
                else
                {
                    result[i] = s.top();
                }
            }
        }

        s.push(arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }

    cout << "\n";

    return 0;
}
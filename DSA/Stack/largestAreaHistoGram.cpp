#include <iostream>
#include <stack>
using namespace std;

int largestAreaHistogram(int *arr, int size)
{
    int nsl[size];
    int nsr[size];

    stack<int> s;

    // computing next smaller to left
    for (int i = 0; i < size; i++)
    {
        if (s.empty())
        {
            nsl[i] = -1;
        }
        else
        {
            if (s.top() == -1)
            {
                nsl[i] = -1;
            }
            else if (arr[s.top()] < arr[i])
            {
                nsl[i] = s.top();
            }
            else
            {
                while (!s.empty() && s.top() != -1 && arr[s.top()] >= arr[i])
                {
                    s.pop();
                }

                if (s.empty())
                {
                    nsl[i] = -1;
                }
                else
                {
                    nsl[i] = s.top();
                }
            }
        }

        s.push(i);
    }

    while (!s.empty())
    {
        s.pop();
    }

    // computing next smaller to right
    for (int i = size-1; i >=0; i--)
    {
        if (s.empty())
        {
            nsr[i] = size;
        }
        else
        {
            if (s.top() == size)
            {
                nsr[i] = size;
            }
            else if (arr[s.top()] < arr[i])
            {
                nsr[i] = s.top();
            }
            else
            {
                while (!s.empty() && s.top() != size && arr[s.top()] >= arr[i])
                {
                    s.pop();
                }

                if (s.empty())
                {
                    nsr[i] = size;
                }
                else
                {
                    nsr[i] = s.top();
                }
            }
        }

        s.push(i);
    }

    // cout<<"NSL : ";
    // for(int i=0;i<size;i++){
    //     cout<<nsl[i]<<" ";
    // }
    // cout<<"\n";

    // cout<<"NSR : ";
    // for(int i=0;i<size;i++){
    //     cout<<nsr[i]<<" ";
    // }
    // cout<<"\n";

    int result = 0;

    for(int i=0;i<size;i++){
        result = max(result,(arr[i])*(nsr[i]-nsl[i]-1));
    }

    return result;
}
int main(void)
{
    int size;

    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << largestAreaHistogram(arr, size) << "\n";

    return 0;
}
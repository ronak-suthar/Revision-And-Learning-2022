#include <iostream>
#include <deque>
using namespace std;

void slidingWindowMaximum(int *ptr, int size, int k)
{
    int i = 0, j = 0;
    deque<int> mow; // max of window

    while (j < size)
    {
        if (mow.empty() == true)
        {
            mow.push_back(ptr[j]);
        }
        else
        {
            if (mow.front() >= ptr[j])
            {

                while(!mow.empty() && mow.back()<ptr[j]){
                    mow.pop_back();
                }
                mow.push_back(ptr[j]);
            }
            else
            {   
                mow.clear();
                mow.push_front(ptr[j]);
            }
        }

        int windowSize = j - i + 1;

        if (windowSize < k)
        {
            j++;
        }
        else if (windowSize == k)
        {
            cout << mow.front() << "\n";

            if (!mow.empty() && mow.front() == ptr[i])
            {
                mow.pop_front();
            }
            i++;
            j++;
        }
    }
}
int main(void)
{
    int arr[] = {1,3,1,2,0,5};
    int k = 3;
    int size = sizeof(arr) / sizeof(arr[0]);

    // [1,3,1,2,0,5]
    // 3   

    slidingWindowMaximum(arr,size,k);

    return 0;
}
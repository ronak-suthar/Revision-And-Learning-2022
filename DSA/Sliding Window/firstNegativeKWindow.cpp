#include <iostream>
#include <queue>

using namespace std;

void firstNegativeNumberKsizeWindow(int *A, int N, int K)
{
    int i = 0, j = 0;
    queue<int> window;

    while (j < N)
    {   //cout<<"J : "<<j<<"\n";
        if (A[j] < 0)
        {   
            //cout<<"Pushed : "<< A[j]<<"\n";
            window.push(j);
        }

        int windowSize = j - i + 1;

        if (windowSize < K)
        {   
            //cout<<"Ran\n";
            j++;
        }
        else if (windowSize == K)
        {   
            if (window.empty())
            {
                cout << "Output : "<< "0 -\n";
            }
            else
            {
                cout <<"Output : " <<A[window.front()] << " -\n";
            }

            if (window.front() == i)
            {
                window.pop();
            }

            i++;
            j++;
        }
    }

    cout << "\n";
}
int main(void)
{
    //int arr[] = {-8, 2, 3, -6, 10};
    // int arr[] = {-500,580};
    int arr[] = {-4554,7421,-210,-5412,-4210,-421,23,53,895,895,-79854,-74512};
    firstNegativeNumberKsizeWindow(arr, sizeof(arr) / sizeof(arr[0]), 3);

    return 0;
}
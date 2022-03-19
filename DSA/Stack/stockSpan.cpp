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
    // 100 80 60 70 60 75 85

    stack<int> s;

    for (int i = 0; i < size; i++)
    {
        if(s.empty()){
            result[i]=1;
        }
        else{
            if(arr[s.top()]>arr[i]){
                result[i] = i - s.top();
            }
            else{
                while(!s.empty() && arr[s.top()]<=arr[i]){
                    s.pop();
                }

                if(s.empty()){
                    result[i]=1;
                }
                else{
                    result[i] = i - s.top();
                }
            }
        }

        s.push(i);
    }

    for(int i=0;i<size;i++){
        cout<<result[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}
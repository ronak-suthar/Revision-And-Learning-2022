#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Reverse First k elements of a queue;

int main(void)
{
    queue<int> data;

    data.push(10);
    data.push(20);
    data.push(30);
    data.push(40);
    data.push(50);

    // 10 20 30 40 50
    // k=3
    // output = 30 20 10 40 50

    stack<int> temp;
    
    int k = 3;

    for(int i=0;i<k;i++){
        temp.push(data.front());
        data.pop();
    }

    while(!temp.empty()){
        data.push(temp.top());
        temp.pop();
    }

    for(int i=0,sizeQueue = data.size();i<sizeQueue-k;i++){
        data.push(data.front());
        data.pop();
    }

    cout<<"Queue Contents are : \n";

    while(!data.empty()){
        cout<<data.front()<<" ";
        data.pop();
    }
    cout<<"\n";
    
    return 0;
}
#include <iostream>
#include <queue>

using namespace std;

typedef pair<int, int> pii;

struct cmp{
     bool operator()(const pii& a,const pii& b){
         if(a.first>b.first){
             return true;
         }
        //  else if(a.first==b.first){

        //  }
        //  else{
             
        //  }

        return false;
     }
};

int main(void)
{

    priority_queue<pii, vector<pii>, cmp> minHeap;

    minHeap.push({1, 5});
    minHeap.push({2, 4});
    minHeap.push({4, 3});
    minHeap.push({4, 2});
    minHeap.push({4, -10});
    minHeap.push({5, 1});

    while (!minHeap.empty())
    {
        cout << minHeap.top().first << " " << minHeap.top().second << "\n";
        minHeap.pop();
    }

    return 0;
}
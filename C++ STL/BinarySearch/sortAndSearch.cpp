#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(int a,int b){
    return a>b;//descending
    //return a<b;//ascending
}

int main(void){
    vector<int> arr{26,12,75,63,20,1,6,85,96};

    sort(arr.begin(),arr.end());

    //check if item is found using binary search

    cout<<binary_search(arr.begin(),arr.end(),85)<<"\n";

    //returns true if item is found else false

    //lower bound iterator to element >=

    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(100);
    arr.push_back(150);

    vector<int>::iterator lb = lower_bound(arr.begin(),arr.end(),100);

    //finding index of element

    lb!= arr.end() ? cout<<lb-arr.begin()<<"\n" : cout<<"Not Found\n";

    //upper bound iterator to element >

    vector<int>::iterator ub = upper_bound(arr.begin(),arr.end(),100);

    //finding index of element

    ub!= arr.end() ? cout<<*ub<<" "<<ub-arr.begin()<<"\n" : cout<<"Not Found\n";

    return 0;
}
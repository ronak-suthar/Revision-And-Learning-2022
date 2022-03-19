#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;

int main(void){
    unordered_set<char> letters;

    string data = "the fox jumped over the fence";

    for(char ltr:data){
        letters.insert(ltr);
    }

    for(auto ele:letters){
        cout<<ele<<" ";
    }
    cout<<"\n";
    
    return 0;
}
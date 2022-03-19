#include<iostream>
#include<set>
#include<string>
using namespace std;

int main(void){
    set<char> letters;

    string data = "the fox jumped over the fence";

    for(char ltr:data){
        letters.insert(ltr);
    }

    for(auto ele:letters){
        cout<<ele<<" ";
    }
    cout<<"\n";

    //finding the items
    
    set<char>::iterator item = letters.find('j');

    cout<<*item<<"\n";

    return 0;
}
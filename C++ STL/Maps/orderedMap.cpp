#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void){
    string data = "Hello This is India";

    map<char,int> letterCount;
    //             key,value

    for(char ltr:data){
        //check presense
        if(letterCount.count(ltr)!=0){
            letterCount[ltr]+=1;
        }
        else{
            //accessing the key
            letterCount[ltr]=1;
        }
    }

    //iterating in map way 1
    for(auto ele:letterCount){
        cout<<ele.first<<" -> "<<ele.second<<"\n";
    }

    // //iterating in map way 2
    // for(auto i = letterCount.begin();i!=letterCount.end();i++){
    //     cout<<i->first<<" -> "<<i->second<<"\n";
    // }

    //iterator can also be declared as unordered_map<char,int>::iterator

    //erasing or deleting key val pair

    letterCount.erase(' ');

    return 0;
}
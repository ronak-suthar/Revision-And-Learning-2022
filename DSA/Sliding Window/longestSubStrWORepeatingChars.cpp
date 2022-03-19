#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int longestSubStringWORepeatingChars(string& s){
    int result = 0;

    int i=0,j=0;

    int size = s.size();

    unordered_map<char,bool> m;

    while(j<size){
        if(m.count(s[j])!=0){
            m.erase(s[i]);
            i++;
        }
        else{
            m[s[j]]=true;
            result = max(result,j-i+1);
            j++;
        }
    }

    return result;
}
int main(void){
    string str;

    cin>>str;

    cout<<longestSubStringWORepeatingChars(str)<<"\n";

    return 0;
}
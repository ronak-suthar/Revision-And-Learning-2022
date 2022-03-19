#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int longestSubStrKUniqueChars(string& s,int k){
    int result = 0;

    int i=0,j=0;
    int size = s.size();

    unordered_map<char,int> m;

    while(j<size){
        if(m.count(s[j])!=0){
            m[s[j]]++;
        }
        else{
            m[s[j]]=1;
        }

        int mapSize = m.size();

        if(mapSize<k){
            j++;
        }
        else if(mapSize==k){
            result = max(result,j-i+1);
            j++;
        }
        else{
            while(m.count(s[i])!=0 && m.size()>k){
                m[s[i]]--;

                if(m[s[i]]==0){
                    m.erase(s[i]);
                }

                if(m.size()==k){
                    result = max(result,j-i+1);
                }

                i++;
            }
            j++;
        }
    }

    return result;
}
int main(void){
    string str;

    cin>>str;

    int k;

    cin>>k;

    cout<<longestSubStrKUniqueChars(str,k)<<"\n";

    return 0;
}
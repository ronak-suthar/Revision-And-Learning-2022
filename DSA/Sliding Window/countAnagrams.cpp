#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;
void findAnagrams1(string s, string p)
{
    unordered_map<char, int> m;

    for (int i = 0; i < p.size(); i++)
        m[p[i]]++;

    int count = m.size(), i = 0, j = 0, k = p.size();

    while (j < s.size())
    {

        if (m.find(s[j]) != m.end())
        {

            m[s[j]]--;

            if (m[s[j]] == 0)
                count--;
        }

        if (j - i + 1 < k)
            j++;

        else if (j - i + 1 == k)
        {

            if (count == 0)
                cout << i << "\n";

            if (m.find(s[i]) != m.end())
            {

                m[s[i]]++;

                if (m[s[i]] == 1)
                    count++;
            }

            i++;

            j++;
        }
    }
}

bool compareFreq(int *a, int *b)
{
    for (int i = 0; i < 27; i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }

    return true;
}
void findAnagrams2(string s, string p)
{
    int pFreq[27] = {0};
    int sFreq[27] = {0};

    for (char ele : p)
    {
        pFreq[ele - 'a'] += 1;
    }

    int i = 0, j = 0;
    int k = p.size();

    while (j < s.size())
    {
        sFreq[s[j] - 'a']++;

        int windowSize = j - i + 1;

        if (windowSize < k)
        {
            j++;
        }
        else if (windowSize == k)
        {
            if (compareFreq(sFreq, pFreq) == true)
            {
                cout << "I : " << i << "\n";
            }

            sFreq[s[i] - 'a']--;
            i++;
            j++;
        }
    }
}

int main(void)
{
    string str = "forxxorfxdofr";

    findAnagrams1(str, "for");

    return 0;
}
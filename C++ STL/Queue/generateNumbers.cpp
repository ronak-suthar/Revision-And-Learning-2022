#include <iostream>
#include <queue>
#include <string>

using namespace std;

// generate numbers with digits only as 5 and 6

int main(void)
{
    queue<string> numbers;

    numbers.push("5");
    numbers.push("6");

    for (int i = 0; i <= 100; i++)
    {
        string num = numbers.front();

        cout << num << " ";

        numbers.pop();

        numbers.push(num + "5");
        numbers.push(num + "6");
    }

    cout << "\n";

    return 0;
}
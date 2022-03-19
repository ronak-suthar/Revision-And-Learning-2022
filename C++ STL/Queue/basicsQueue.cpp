#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    queue<int> data;

    data.push(10);
    data.push(20);
    data.push(30);
    data.push(40);

    // 10 -> 20 -> 30 -> 40

    cout << "Front : " << data.front() << "\n";

    cout << "Back : " << data.back() << "\n";

    cout << "Popped Element\n";

    data.pop();

    cout << "Front : " << data.front() << "\n";

    return 0;
}
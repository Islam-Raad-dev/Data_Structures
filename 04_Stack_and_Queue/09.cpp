/*

Stack                 

*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stNumbers;

    stNumbers.push(10);
    stNumbers.push(20);
    stNumbers.push(30);
    stNumbers.push(40);
    stNumbers.push(50);

    cout << "Stack size: " << stNumbers.size() << endl;

    cout << "Numbers are:\n";

    while (!stNumbers.empty())
    {
        cout << stNumbers.top() << "\n";

        stNumbers.pop();
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()     
{      
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // O(n) - Linear Time Complexity
    cout << "O(n) - Linear Time Complexity:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << " ";
    }     
    cout << endl;

    // O(n^2) - Quadratic Time Complexity
    cout << "O(n^2) - Quadratic Time Complexity:" << endl;
    for (int i = 0; i < n; i++)
    {      
        for (int j = 0; j < n; j++)
        {
            cout << "(" << i << ", " << j << ") ";
        }

        cout << endl;
    }

    return 0;
}
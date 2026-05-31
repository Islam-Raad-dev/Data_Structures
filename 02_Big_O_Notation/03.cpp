#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // O(log n) - Logarithmic Time Complexity
    
    cout << "O(log n) - Logarithmic Time Complexity:" << endl;
    for (int i = 1; i < n; i *= 2)
    {                
        cout << i << " ";
    }            
    cout << endl;

    return 0;
}
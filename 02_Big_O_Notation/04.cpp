/*



*/

#include <iostream>

using namespace std;

int main()
{
    int n;   

    cout << "Enter the value of n: ";
    cin >> n;

    // O(n log n) - Linearithmic Time Complexity

    cout << "O(n log n) - Linearithmic Time Complexity:" << endl;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j *= 2)
        {
            cout << "(" << i << ", " << j << ") ";
        }

        
        cout << endl;
    }

    return 0;
}
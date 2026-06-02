/*

Time Complexity: O(n^2).
                   
*/

#include <iostream>
using namespace std;

void PrintPairs(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    PrintPairs(arr, n);
    return 0;
}
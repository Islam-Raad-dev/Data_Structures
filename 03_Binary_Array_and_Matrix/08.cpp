/*

Array and Matrix

*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}};

    // Print the matrix
    for (const auto &row : matrix)
    {
        for (const auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
/*

Time Complexity: O(1).
 
*/

#include <iostream>

using namespace std;

char GetLastCharacter(string S1)
{
    return S1[S1.length() - 1];
}
int main()
{
    string S1;

    cout << "Enter a string: ";
    cin >> S1;

    cout << "The last character of the string is: " << GetLastCharacter(S1) << endl;
    return 0;
}
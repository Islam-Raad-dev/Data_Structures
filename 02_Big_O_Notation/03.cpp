/*

Time Complexity: O(n). 
 
*/

#include <iostream>

using namespace std;

char GetLastCharacter(string S1)
{
    int n = S1.length() - 1;

    for(int i = 0; i < n; i++)
    {
       if(i == n)
       {
           return S1[n];
       }
    }
        return S1[n];
}
int main()
{

    string S1 = "Hello World";

    cout << GetLastCharacter(S1) << endl;

    return 0;
}
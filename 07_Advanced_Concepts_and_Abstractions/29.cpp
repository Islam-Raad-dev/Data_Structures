/*

Map :

 A map is a collection of key-value pairs where each key is unique  and 
 maps to a specific value. In C++, the map data structure is implemented 
 using the std::map class from the Standard Template Library (STL). It 
 allows you to store and retrieve values based on their associated keys 
 efficiently.

*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> StudentMarks;

    StudentMarks["Isalm"] = 85;
    StudentMarks["Ahmad"] = 90;
    StudentMarks["Omar"] = 78;

    for (const auto &pair : StudentMarks)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    string StudentName = "Ahmad";
    if (StudentMarks.find(StudentName) != StudentMarks.end())
    {
        cout << StudentName << "'s marks: " << StudentMarks[StudentName] << endl;
    }
    else
    {
        cout << StudentName << " not found in the map." << endl;
    }
    return 0;
}
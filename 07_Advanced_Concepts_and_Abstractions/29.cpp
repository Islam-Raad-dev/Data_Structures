/*

Map

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
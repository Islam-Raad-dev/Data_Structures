/*

Map 

*/
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> myMap;

    // Insert key-value pairs into the map
    myMap["apple"] = 1;
    myMap["banana"] = 2;
    myMap["orange"] = 3;

    // Access values using keys
    cout << "Value for 'apple': " << myMap["apple"] << endl;
    cout << "Value for 'banana': " << myMap["banana"] << endl;
    cout << "Value for 'orange': " << myMap["orange"] << endl;

    // Check if a key exists
    if (myMap.find("grape") != myMap.end()) {
        cout << "Value for 'grape': " << myMap["grape"] << endl;
    } else {
        cout << "'grape' not found in the map." << endl;
    }

    return 0;
}
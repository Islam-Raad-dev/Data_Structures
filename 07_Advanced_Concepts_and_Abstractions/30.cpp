/*

Union:

 A union is a data structure that can hold different types of data but
 only one type at a time. It is similar to a struct, but all members of a
 union share the same memory location. This means that the size of a union
 is determined by the size of its largest member. Unions are useful when
 you want to store different types of data in the same memory location,
 but you need to be careful when accessing the members of a union, as it
 can lead to undefined behavior if you access a member that is not
 currently active.

*/

#include <iostream>
#include <string>
using namespace std;

union Data
{
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    Data data;

    data.intValue = 42;
    cout << "Integer value: " << data.intValue << endl;

    data.floatValue = 3.14f;
    cout << "Float value: " << data.floatValue << endl;

    data.charValue = 'A';
    cout << "Character value: " << data.charValue << endl;

    cout << "Integer value after assigning charValue: " << data.intValue << endl;

    return 0;
}
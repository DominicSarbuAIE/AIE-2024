#include <iostream>
#include <fstream>
#include "StringUtil.h"
using namespace std;

int main()
{
    StringUtil _string("Hello World");

    // Length Function evidence
    cout << "Length Function:" << endl << "Character count is: " << _string.Length() << endl;

    // CharacterAt Function evidence
    cout << endl << "CharacterAt Function:" << endl << "your letter is, " << _string.CharacterAt(4) << endl;

    // EqualTo Function evidence
    if (_string.EqualTo("Hello World")) {
        cout << endl << "EqualTo Function:" << endl << "True" << endl;
    }
    else {
        cout << endl << "EqualTo Function:" << endl << "False" << endl;
    }

    // Append Function evidence
    StringUtil appendedString(_string);
    appendedString.Append(StringUtil("!!!"));
    cout << endl << "Append Function:" << endl << appendedString.CStr() << endl;

    // Prepend Function evidence
    StringUtil prependString(_string);
    prependString.Prepend(StringUtil("!!!"));
    cout << endl << "Prepend Function:" << endl << prependString.CStr() << endl;

    // ToLower Function evidence
    StringUtil lowercasedString(_string);
    lowercasedString.ToLower();
    cout << endl << "ToLower Function:" << endl << lowercasedString.CStr() << endl;

    // ToUpper Function evidence
    StringUtil uppercasedString(_string);
    uppercasedString.ToUpper();
    cout << endl << "ToUpper Function:" << endl << uppercasedString.CStr() << endl;




    //
    // File Testing
    //
    fstream file;
    file.open("test.txt", ios::out);
    if (file.is_open()) {
        file << "Length Function:" << endl << "Character count is: " << _string.Length() << endl;
        file << endl << "CharacterAt Function:" << endl << "your letter is, " << _string.CharacterAt(4) << endl;
        if (_string.EqualTo("Hello World")) {
            file << endl << "EqualTo Function:" << endl << "True" << endl;
        }
        else {
            file << endl << "EqualTo Function:" << endl << "False" << endl;
        }
        file << endl << "Append Function:" << endl << appendedString.CStr() << endl;
        file << endl << "Prepend Function:" << endl << prependString.CStr() << endl;
        file << endl << "ToLower Function:" << endl << lowercasedString.CStr() << endl;
        file << endl << "ToUpper Function:" << endl << uppercasedString.CStr() << endl;
    }
    else {
        return 0;
    }
    file.close();



    return 0;
}
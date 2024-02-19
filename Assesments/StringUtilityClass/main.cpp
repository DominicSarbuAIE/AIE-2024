#include <iostream>
#include "StringUtil.h"
using namespace std;

int main()
{
    StringUtil _string ("Hello World");

    // Length Function evidence
    cout<<"Length Function:"<<endl<<"Character count is: "<<_string.Length()<<endl;

    // CharacterAt Function evidence
    cout<<endl<<"CharacterAt Function:"<<endl<<"your letter is, "<<_string.CharacterAt(4)<<endl;

    // EqualTo Function evidence
    cout<<endl<<"EqualTo Function:"<<endl<<_string.EqualTo("Hello World")<<std::endl;
    if(_string.EqualTo("Hello World")){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    // Append Function evidence
    cout << endl << "Append Function:" << endl;
    _string.Append(StringUtil("!!!"));
    cout << _string.CStr() << endl;

    // Prepend + Append Function evidence
    cout << endl << "Prepend + Append Function:" << endl;
    _string.Prepend(StringUtil("!!!"));
    cout << _string.CStr() << endl;

    // ToLower Function evidence
    cout << endl << "ToLower Function:" << endl;
    _string.ToLower();
    cout << _string.CStr() << endl;
    _string.ToUpper();
    cout << _string.CStr() << endl;

    return 0;
}
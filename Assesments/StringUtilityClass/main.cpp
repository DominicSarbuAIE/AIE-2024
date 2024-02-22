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
    cout<<endl<<"EqualTo Function:"<<endl<<_string.EqualTo("Hello World")<<endl;
    if(_string.EqualTo("Hello World")){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    // Append Function evidence
    StringUtil appendedString(_string); // Create copy of _string
    appendedString.Append(StringUtil("!!!"));
    cout<<endl<<"Append Function:"<<endl<<appendedString.CStr()<<endl;

    // Prepend Function evidence
    StringUtil prependString(_string); // Create copy of _string
    prependString.Prepend(StringUtil("!!!"));
    cout<<endl<<"Prepend Function:"<<endl<<prependString.CStr()<<endl;

    // ToLower Function evidence
    StringUtil lowercasedString(_string); // Create copy of _string
    lowercasedString.ToLower();
    cout<<endl<<"ToLower Function:"<<endl<<lowercasedString.CStr()<<endl;

    // ToUpper Function evidence
    StringUtil uppercasedString(_string); // Create copy of _string
    uppercasedString.ToUpper();
    cout<<endl<<"ToUpper Function:"<<endl<<uppercasedString.CStr()<<endl;

    return 0;
}
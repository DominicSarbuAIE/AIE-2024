#include <iostream>
#include "String.h"
using namespace std;

int main()
{
    String _string ("Hello World");

    std::cout<<"your letter is, "<<_string.CharacterAt(4)<<std::endl;
    std::cout<<_string.EqualTo("Hello World")<<std::endl;
    if(_string.EqualTo("Hello World")){
        std::cout<<"True"<<std::endl;
    }
    else{
        std::cout<<"False"<<std::endl;
    }

    String appendedString(", this is being appended");
    _string.Append(appendedString);
    cout<<_string<<endl;
    return 0;
}
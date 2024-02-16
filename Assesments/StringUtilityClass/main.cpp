#include <iostream>
#include "String.h"

int main()
{
    String _string("Hello World");

    std::cout<<"your letter is, "<<_string.CharacterAt(4)<<std::endl;
    std::cout<<_string.EqualTo("Hello World")<<std::endl;
    if(_string.EqualTo("Hello World")){
        std::cout<<"True"<<std::endl;
    }
    else{
        std::cout<<"False"<<std::endl;
    }
}
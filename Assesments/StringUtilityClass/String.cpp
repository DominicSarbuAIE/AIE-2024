#include "String.h"
#include <iostream>

String::String()
{
    m_string = nullptr;
}

String::String(const char* _str)
{
    m_string = new char[(strlen(_str)) + 1];
    strcpy(m_string, _str);

    std::cout << _str << std::endl;
}

String::String(const String& _other)
{
}

String::~String()
{
    delete[] m_string;
}

size_t String::Length() const
{
    return strlen(m_string);
}

char String::CharacterAt(size_t _index)
{
    if (_index < 0 || _index >= this->Length()) return '\0';
    else return m_string[_index];
}

bool String::EqualTo(const String& _other) const
{
    if (strcmp(m_string, _other.m_string) == 0) {
        return true;
    }
    else return false;
}

String& String::Append(const String& _str)
{
    // TODO: insert return statement here
}

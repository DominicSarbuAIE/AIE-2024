#include "String.h"
#include <iostream>

String::String()
{
    m_string = nullptr;
    m_length = 0;
}

String::String(const char* _str)
{
    m_length = strlen((_str));
    m_string = new char[m_length + 1];
    strcpy(m_string, _str);

    std::cout << _str << std::endl;
}

String::String(const String& _other)
{
    m_length = _other.m_length;
    m_string = new char[m_length + 1];
    strcpy(m_string, _other.m_string);
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
    char* newString = new char[m_length + _str.m_length + 1];
    strcpy(newString, m_string);
    strcat(newString, _str.m_string);
    delete[] m_string;
    m_string = newString;
    m_length = strlen(m_string);

    return *this;
}
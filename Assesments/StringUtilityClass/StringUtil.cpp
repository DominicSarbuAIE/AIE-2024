#include "StringUtil.h"
#include <iostream>
#include <cstring>

StringUtil::StringUtil()
{
    m_string = nullptr;
    m_length = 0;
}

StringUtil::StringUtil(const char* _str)
{
    m_length = strlen((_str));
    m_string = new char[m_length + 1];
    strcpy(m_string, _str);
}

StringUtil::StringUtil(const StringUtil& _other)
{
    m_length = _other.m_length;
    m_string = new char[m_length + 1];
    strcpy(m_string, _other.m_string);
}

StringUtil::~StringUtil()
{
    delete[] m_string;
}

// Returns an integer representing the count of characters up to the null termination character
size_t StringUtil::Length() const
{
    return strlen(m_string);
}

// Returns a char representing the character at the location. If index is less than 0 or greater than length, return '\0'
char StringUtil::CharacterAt(size_t _index)
{
    if (_index < 0 || _index >= this->Length()) {
        return '\0';
    }
    else {
        return m_string[_index];
    }
}

// Returns true if str contains the same characters.
bool StringUtil::EqualTo(const StringUtil& _other) const
{
    return strcmp(m_string, _other.m_string) == 0;
}

// Adds str to the end of the string
StringUtil& StringUtil::Append(const StringUtil& _str)
{
    size_t newLength = m_length + _str.Length();
    char* temp = new char[newLength + 1];
    strcpy(temp, m_string);
    strcat(temp, _str.m_string);
    delete[] m_string;
    m_string = temp;
    m_length = newLength;
    return *this;

    // TODO: Replace AmazonCodeWhisperer Code
    /*
    m_length += _str.Length();
    char* temp = new char[m_length + 1];
    strcpy(temp, m_string);
    strcat(temp, _str.m_string);
    delete[] m_string;
    m_string = temp;
    return *this;
     */
}

// Adds str to the beginning of the string
StringUtil &StringUtil::Prepend(const StringUtil &_str)
{
    size_t newLength = m_length + _str.Length();
    char* temp = new char[newLength + 1];
    strcpy(temp, _str.m_string);
    strcat(temp, m_string);
    delete[] m_string;
    m_string = temp;
    m_length = newLength;
    return *this;
}

// Return the const char * that is useable with std::cout. eg: std::cout << str.cstr() << std::endl;
const char *StringUtil::CStr() const
{
    return m_string;
}

// Convert all characters to lowercase
StringUtil &StringUtil::ToLower()
{
    for (size_t i = 0; i < m_length; i++) {
        m_string[i] = tolower(m_string[i]);
    }
    return *this;
}

// Convert all characters to uppercase
StringUtil &StringUtil::ToUpper()
{
    for (int i = 0; i < m_length; i++) {
        m_string[i] = toupper(m_string[i]);
    }
    return *this;
}

// Returns the location of the findString. If not found, return -1
size_t StringUtil::Find(const StringUtil &_str)
{

}
// Returns the location of the strToFind. Beginning the search from startIndex. If not found, return -1
size_t StringUtil::Find(size_t _startIndex, const StringUtil &_str)
{

}

#pragma once
#ifndef CUSTOM_STRING_HEADER
#define CUSTOM_STRING_HEADER
#include <cstddef> // needed for size_t on Mac

class StringUtil;

class StringUtil
{
public:
    StringUtil();
    StringUtil(const char* _str);

    StringUtil(const StringUtil& _other);

    ~StringUtil();

public:
    size_t Length() const;
    char CharacterAt(size_t _index);
    const char& CharacterAt(size_t _index) const;

    bool EqualTo(const StringUtil& _other) const;

    StringUtil& Append(const StringUtil& _str);
    StringUtil& Prepend(const StringUtil& _str);

    const char* CStr() const;

    StringUtil& ToLower();
    StringUtil& ToUpper();

    size_t Find(const StringUtil& _str);
    size_t Find(size_t _startIndex, const StringUtil& _str);

    StringUtil& Replace(const StringUtil& _find, const StringUtil& _replace);

    StringUtil& ReadFromConsole();
    StringUtil& WriteToConsole();

public:
    bool operator==(const StringUtil& _other);
    bool operator!=(const StringUtil& _other);

    StringUtil& operator=(const StringUtil& _str);

    char& operator[](size_t _index);
    const char& operator[](size_t _index) const;

private:
    /*
    * Put your internal data structures and members here
    */
    char* m_string;
    size_t m_length; // Track length of string
};
#endif
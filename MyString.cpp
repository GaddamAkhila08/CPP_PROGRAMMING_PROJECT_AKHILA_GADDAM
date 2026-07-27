#include "MyString.h"
#include <iostream>
#include <cstring>

using namespace std;

// Default Constructor
MyString::MyString()
{
    length = 0;
    str = new char[1];
    str[0] = '\0';
}

// Parameterized Constructor
MyString::MyString(const char* text)
{
    if (text == nullptr)
    {
        length = 0;
        str = new char[1];
        str[0] = '\0';
    }
    else
    {
        length = strlen(text);
        str = new char[length + 1];
        strcpy(str, text);
    }
}

// Copy Constructor
MyString::MyString(const MyString& other)
{
    length = other.length;
    str = new char[length + 1];
    strcpy(str, other.str);
}

// Destructor
MyString::~MyString()
{
    delete[] str;
}

// Assignment Operator
MyString& MyString::operator=(const MyString& other)
{
    if (this != &other)
    {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }
    return *this;
}

// Set String
void MyString::setString(const char* text)
{
    delete[] str;

    if (text == nullptr)
    {
        length = 0;
        str = new char[1];
        str[0] = '\0';
        return;
    }

    length = strlen(text);
    str = new char[length + 1];
    strcpy(str, text);
}

// Display
void MyString::display() const
{
    cout << str;
}

// Size
int MyString::size() const
{
    return length;
}

// Empty
bool MyString::empty() const
{
    return length == 0;
}

// Clear
void MyString::clear()
{
    delete[] str;
    length = 0;
    str = new char[1];
    str[0] = '\0';
}

// Append
void MyString::append(const char* text)
{
    if (text == nullptr)
        return;

    int newLength = length + strlen(text);

    char* temp = new char[newLength + 1];

    strcpy(temp, str);
    strcat(temp, text);

    delete[] str;

    str = temp;
    length = newLength;
}

// Compare
int MyString::compare(const MyString& other) const
{
    return strcmp(str, other.str);
}

// Find
int MyString::find(const char* text) const
{
    if (text == nullptr)
        return -1;

    char* pos = strstr(str, text);

    if (pos == nullptr)
        return -1;

    return pos - str;
}

// Substring
MyString MyString::substr(int start, int len) const
{
    if (start < 0 || start >= length || len <= 0)
        return MyString("");

    if (start + len > length)
        len = length - start;

    char* temp = new char[len + 1];

    strncpy(temp, str + start, len);
    temp[len] = '\0';

    MyString result(temp);

    delete[] temp;

    return result;
}

// Concatenate
MyString MyString::operator+(const MyString& other) const
{
    char* temp = new char[length + other.length + 1];

    strcpy(temp, str);
    strcat(temp, other.str);

    MyString result(temp);

    delete[] temp;

    return result;
}

// Character by Index
char& MyString::operator[](int index)
{
    static char dummy = '\0';

    if (index < 0 || index >= length)
        return dummy;

    return str[index];
}

// Equality
bool MyString::operator==(const MyString& other) const
{
    return strcmp(str, other.str) == 0;
}
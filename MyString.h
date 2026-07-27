#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
private:
    char* str;
    int length;

public:
    // Constructors
    MyString();
    MyString(const char* text);
    MyString(const MyString& other);

    // Destructor
    ~MyString();

    // Assignment Operator
    MyString& operator=(const MyString& other);

    // Basic Functions
    int size() const;
    bool empty() const;
    void clear();
    void display() const;
    void setString(const char* text);

    // String Operations
    void append(const char* text);
    int compare(const MyString& other) const;
    int find(const char* text) const;
    MyString substr(int start, int len) const;

    // Operator Overloading
    MyString operator+(const MyString& other) const;
    char& operator[](int index);
    bool operator==(const MyString& other) const;
};

#endif
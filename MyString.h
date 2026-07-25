#ifndef MYSTRING_H
#define MYSTRING_H
class MyString{
private:
    char* str;
    int length;
public:
    MyString();
    MyString(const char* text);
    MyString(const MyString& other);
    ~MyString();
    MyString& operator=(const MyString& other);
    int size() const;
    bool empty() const;
    void clear();
    void display() const;
    void append(const char* text);
    int compare(const MyString& other) const;
    int find(const char* text) const;
    MyString substr(int start,int len) const;
    MyString operator+(const MyString& other) const;
    char& operator[](int index);
    bool operator==(const MyString& other) const;
};
#endif

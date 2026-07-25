#include "MyString.h"
#include <iostream>
#include <cstring>
using namespace std;
MyString::MyString(){length=0;str=new char[1];str[0]='\0';}
MyString::MyString(const char* t){if(!t){length=0;str=new char[1];str[0]='\0';}else{length=strlen(t);str=new char[length+1];strcpy(str,t);}}
MyString::MyString(const MyString&o){length=o.length;str=new char[length+1];strcpy(str,o.str);}
MyString::~MyString(){delete[] str;}
MyString& MyString::operator=(const MyString&o){if(this!=&o){delete[] str;length=o.length;str=new char[length+1];strcpy(str,o.str);}return *this;}
int MyString::size()const{return length;}
bool MyString::empty()const{return length==0;}
void MyString::clear(){delete[] str;length=0;str=new char[1];str[0]='\0';}
void MyString::display()const{cout<<str;}
void MyString::append(const char*t){if(!t)return;int nl=length+strlen(t);char*tmp=new char[nl+1];strcpy(tmp,str);strcat(tmp,t);delete[] str;str=tmp;length=nl;}
int MyString::compare(const MyString&o)const{return strcmp(str,o.str);}
int MyString::find(const char*t)const{if(!t)return -1;char*p=strstr(str,t);return p?int(p-str):-1;}
MyString MyString::substr(int s,int l)const{if(s<0||s>=length||l<=0)return MyString("");if(s+l>length)l=length-s;char*tmp=new char[l+1];strncpy(tmp,str+s,l);tmp[l]='\0';MyString r(tmp);delete[] tmp;return r;}
MyString MyString::operator+(const MyString&o)const{char*tmp=new char[length+o.length+1];strcpy(tmp,str);strcat(tmp,o.str);MyString r(tmp);delete[] tmp;return r;}
char& MyString::operator[](int i){if(i<0||i>=length){static char x='\0';return x;}return str[i];}
bool MyString::operator==(const MyString&o)const{return strcmp(str,o.str)==0;}

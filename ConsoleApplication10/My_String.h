#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char* str;
    int length;
    static int amount;
public:
    MyString();
    MyString(const char* obj);
    MyString(const MyString& obj);
    void Print();
    void Input();
    void MyStrcpy(MyString& obj);
    bool MyStrStr(const char* substring);
    int  MyChr(char c);
    int MyStrLen();
    void MyStrCat(MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(MyString& b);
    static void Amount();
    char operator[](int index);
    void SetStr(const char* d);
    char* GetStr();
    ~MyString();
};
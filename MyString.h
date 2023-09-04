#pragma once
#include <iostream>
using namespace std;

class MyString
{
private:
    string str;

public:
    MyString();
    MyString(string str);
    string getStr();
    MyString operator*(MyString);
};

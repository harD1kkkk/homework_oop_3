// zavd_75.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include "MyString.h"
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    cout << endl;

    string strin;
    cout << "Enter second string: ";
    cin >> strin;

    MyString str1(str);
    MyString str2(strin);
    MyString str3 = str1 * str2;
    cout << str3.getStr() << endl;
}
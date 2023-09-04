#include "MyString.h"

MyString::MyString() {
    str = "";
}

MyString::MyString(string str) {
    this->str = str;
}

string MyString::getStr() {
    return str;
}

MyString MyString::operator*(MyString str2) {
    MyString Strtemp;  
    for (int i = 0; i < this->str.length(); i++) {
        for (int j = 0; j < str2.str.length(); j++) {
            if (this->str[i] == str2.str[j]) {
                Strtemp.str += this->str[i];
                break;
            }
        }
    }
    return Strtemp;
}

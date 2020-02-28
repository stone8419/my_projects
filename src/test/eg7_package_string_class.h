/*
 * @Description: 字符串类的封装
 * @Author: stone
 * @Date: 2020-02-18 15:18:15
 * @LastEditTime: 2020-02-28 11:06:38
 * @LastEditors: stone
 */
#ifndef _EG7_PACKAGE_STRING_CLASS_H
#define _EG7_PACKAGE_STRING_CLASS_H
#include "test.h"
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
#ifdef __cplusplus
extern "C" {
#endif
class MyString {
    friend istream& operator>>(istream& cin, MyString* user);

public:
    MyString();
    MyString(const char* str);
    MyString(const MyString& user);
    void showInfo();
    void setInfo();
    ~MyString();

private:
    char* m_Str;
    int m_Size;
};
#ifdef __cplusplus
}
#endif
#endif // _EG7_PACKAGE_STRING_CLASS_H
/*** 
 * @Author: stone
 * @Date: 2020-04-11 23:49:18
 * @LastEditTime: 2020-05-01 23:00:50
 * @LastEditors: stone
 * @Description: 
 * @FilePath: /server_frame/src/main.cpp
 * @Copyright © 2000-2020 lldao9527@139.com All Rights Reserved.
 */
#include "find_string_todo.h"
#include "test.h"
#include <errno.h>
#include <iostream>
#include <limits.h>
using namespace std;

int main(int, char**)
{

#ifdef CPP_LEARN
    test();
#endif
    printf("hello world");
#ifdef STR_PROCESS
    testStr();
#endif

    return 0;
}

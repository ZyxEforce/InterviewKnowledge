#include <iostream>
#include "stdio.h"

struct st_byte_align1
{
    char var1;
    short var2;
    int var3;
    long var4;
};

struct st_byte_align2
{
    int var1;
    long var2;
    char var3;
};

struct st_byte_align3
{
    char var1;
    int var2;
    long var3;
};

/**************************************************
 * @Name:test_struct
 * @Description :测试字节对齐，64位机器，GNU编译器
 * @Create by:zyx
 * @Last modified:zyx
 * @Last modified time:2020/05/15
 * ************************************************/
int main ()
{   
    st_byte_align1 st = {'1',11,111,1111};
    std::cout << "st.var1: " << sizeof(st.var1) << std::endl;
    std::cout << "std.var2: "<< sizeof(st.var2) << std::endl;
    std::cout << "std.var3: " << sizeof(st.var3) << std::endl;
    std::cout << "std.var4: " << sizeof(st.var4) << std::endl;
    std::cout << "sizeof(st_byte_clign1):" << sizeof(st) << std::endl;

    std::cout << "*****************************************" << std::endl;
    st_byte_align2 st2 = {11,111,'1'};
    std::cout << "st2.var1: " << sizeof(st2.var1) << std::endl;
    std::cout << "st2.var2: " << sizeof(st2.var2) << std::endl;
    std::cout << "st2.var3: " << sizeof(st2.var3) << std::endl;
    std::cout << "sizeof(st2): " << sizeof(st2) << std::endl;

    std::cout << "*****************************************" << std::endl;
    st_byte_align3 st3 = {'1', 111, 111};
    std::cout << "st3.var1: " << sizeof(st3.var1) << std::endl;
    std::cout << "st3.var2: " << sizeof(st3.var2) << std::endl;
    std::cout << "st3.var3: " << sizeof(st3.var3) << std::endl;
    std::cout << "sizeof(st3): " << sizeof(st3) << std::endl;
    
    return 0;
}
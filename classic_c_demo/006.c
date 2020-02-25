/*
 * 输出不同累心所占的字节数
 */
 
#include<stdio.h>

int main()
{
    // sizeof()是保留字，它的作用是求某类型或某变量类型的字节数
    // 括号中可以是类型保留字或变量
    printf("the bytes of the variables are:\n");
    printf("int:%d bytes\n",sizeof(int));
    printf("char:%d bytes\n",sizeof(char));
    printf("short:%d bytes\n",sizeof(short));
    printf("long:%d bytes\n",sizeof(long));
    printf("long long:%d bytes\n",sizeof(long long));
    printf("float:%d bytes\n",sizeof(float));
    printf("double:%d bytes\n",sizeof(double));
    
}
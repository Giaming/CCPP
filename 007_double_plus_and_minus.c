// 自增和自减运算
#include <stdio.h>
int main()
{
    int a=5,b,c,i=10;
    b=a++;
    c=++b;

    printf("a=%d, b=%d, c=%d\n",a,b,c);
    printf("i=%d",i);
    printf("i++=%d\n",i++);
    printf("++i=%d\n",++i);  
    printf("i--=%d\n",i--);
    printf("--i=%d\n",--i);    

}
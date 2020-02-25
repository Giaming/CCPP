// 乘法口诀表
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

void gotoxy(int x, int y) {
    COORD pos = {x,y};
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);// 获取标准输出设备句柄
    SetConsoleCursorPosition(hOut, pos);//两个参数分别是指定哪个窗体，具体位置
}

int main()
{
    int i,j,x,y;
    system("clear");   // 清屏
    printf("\n\n * * * 乘法口诀表* * *\n\n");
    x = 9;
    y = 5;
    for(i=1;i<=9;i++){
        gotoxy(x,y);
        printf("%2d",i);
        x+=3;
    }
    x = 7;
    y = 6;
    for ( i = 1; i <= 9; i++)
    {
        gotoxy(x,y);
        printf("%2d",i);
        y++;
    }
    x=9;
    y=6;
    for ( i = 1; i <= 9; i++)
    {
        for ( j = 1; j <= 9; j++)      
        {   
           gotoxy(x,y);
           printf("%2d",i*j);
           y++;
        }
        y-=9;
        x+=3;
    }
    printf("\n\n");
}
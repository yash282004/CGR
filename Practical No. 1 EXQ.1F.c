// Practical No. 1: Programs to draw basic graphics object.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    rectangle(100,300,250,450);
    rectangle(250,300,500,450);
    line(175,170,100,300);
    line(175,170,250,300);
    line(425,170,500,300);
    line(175,170,425,170);
    getch();
    return 0;
}
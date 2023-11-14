// Practical No. 1: Programs to draw basic graphics object.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    rectangle(100,100,500,250);
    circle(160,310,60);
    circle(440,310,60);
    getch();
    return 0;
}
// Practical No. 1: Programs to draw basic graphics object.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    line(200,200,450,200);
    line(200,200,200,300);
    line(200,300,450,300);
    line(450,200,450,150);
    line(450,300,450,350);
    line(450,150,550,250);
    line(450,350,550,250);
    getch();
    return 0;
}
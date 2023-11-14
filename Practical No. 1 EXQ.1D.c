// Practical No. 1: Programs to draw basic graphics object.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    ellipse(100,100,0,360,70,35);
    circle(60,100,10);
    circle(140,100,10);
    ellipse(100,215,0,360,40,80);
    line(60,215,20,245);
    line(140,215,180,245);
    getch();
    return 0;
}
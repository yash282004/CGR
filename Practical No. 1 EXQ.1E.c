// Practical No. 1: Programs to draw basic graphics object.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    ellipse(300,300,0,360,150,115);
    circle(230,270,20);
    circle(370,270,20);
    rectangle(260,365,340,395);
    line(300,280,280,330);
    line(300,280,320,330);
    line(280,330,320,330);
    getch();
    return 0;
}
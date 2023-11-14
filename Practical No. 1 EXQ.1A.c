// Practical No. 1: Programs to draw basic graphics object.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    rectangle(100,100,300,200);
    rectangle(140,120,260,180);
    rectangle(10,280,410,340);
    line(170,200,80,280);
    line(230,200,320,280);
    getch();
    return 0;
}
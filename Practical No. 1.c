// Practical No. 1: Programs to draw basic graphics object.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    putpixel(50,50,RED);
    outtextxy(55,55,"PIXEL");
    line(100,70,200,100);
    outtextxy(220,110,"LINE");
    circle(230,50,50);
    outextxy(290,120,"CIRCLE");
    rectangle(300,40,400,100);
    outtextxy(420,120,"RECTANGLE");
    ellipse(450,50,0,360,40,80);
    outtextxy(450,200,"ELLIPSE");
    getch();
    return 0;
}
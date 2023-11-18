// Practical No. 2: Program to draw line using DDA algorithm.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,dx,dy,length,i;
    float x,y,xin,yin;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("Enter starting coordinates of line:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter ending coordinates of line:\n");
    scanf("%d%d",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    if(dx>dy)
    {
        length=dx;
    }
    else
    {
        length=dy;
    }
    x=x1+0.5;
    y=y1+0.5;
    xin=dx/length;
    yin=dy/length;
    putpixel(x,y,RED);
    for(i=0;i<=length;i++)
    {
        x=x+xin;
        y=y+yin;
        putpixel(x,y,RED);
        
    }
    getch();
    return 0;
}

// Practical No. 4: Program to draw Circle.

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    int center_x,center_y,r,x,y,d;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("Enter center cooedinates of circle:\n");
    scanf("%d%d",&center_x,&center_y);
    printf("Enter radius of circle:\n");
    scanf("%d",&r);
    putpixel(center_x,center_y,RED);
    d=3-2*r;
    x=0;
    y=r;
    do
    {
        putpixel(center_x+x,center_y+y,RED);
        putpixel(center_x+x,center_y-y,RED);
        putpixel(center_x-x,center_y+y,RED);
        putpixel(center_x-x,center_y-y,RED);
        putpixel(center_x+y,center_y+x,RED);
        putpixel(center_x+y,center_y-x,RED);
        putpixel(center_x-y,center_y+x,RED);
        putpixel(center_x-y,center_y-x,RED);
        if(d<0)
        {
            d=d+4*x+6;
        }
        else
        {
            d=d+4*(x-y)+10;
            y--;
        }
        x++;
    }while(x<y);
    getch();
    return 0;
}
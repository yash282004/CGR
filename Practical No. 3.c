// Practical No. 3: Program to draw line using Bresenham's algorithm.

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,dx,dy,pk=0,i;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("Enter starting coordinates of line:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter end coordinates of line:\n");
    scanf("%d%d",&x2,&y2);
    dx=x2-x1;
    dy=y2-y1;
    putpixel(x1,y1,RED);
    if(dx>dy)
    {
        pk=2*dy-2*dx;
        for(i=0;i<dx;i++)
        {
            if(pk<0)
            {
                pk=pk+2*dy;
                x1++;
            }
            else            {
                pk=pk+(2*dy-2*dx);
                x1++;
                y1++;
            }
            putpixel(x1,y1,RED);
        }
    }
    else
    {
        pk=2*dx-2*dy;
        for(i=0;i<dy;i++)
        {
            if(pk<0)
            {
                pk=pk+2*dx;
                y1++;
            }
            else
            {
                pk=pk+(2*dx-2*dy);
                x1++;
                y1++;
            }
            putpixel(x1,y1,RED);
        }
    
    }
    getch();
    return 0;
}
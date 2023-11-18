// Practical No. 15: Program to draw Hilbert curve 



#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void move(int j,int h,int &x,int &y)
{
    if(j==1)
    {
        y=y-h;
    }
    else if(j==2)
    {
        x=x+h;
    }
    else if(j==3)
    {
        y=y+h;
    }
    else if(j==4)
    {
        x=x-h;
    }
    delay(5);
    lineto(x,y);
}

void hilbert(int r,int d,int l,int u,int i,int h,int &x,int &y)
{
    if(i>0)
    {
        i--;
        hilbert(d,r,u,l,i,h,x,y);
        move(r,h,x,y);
        hilbert(r,d,l,u,i,h,x,y);
        move(d,h,x,y);
        hilbert(r,d,l,u,i,h,x,y);
        move(l,h,x,y);
        hilbert(u,l,d,r,i,h,x,y);
    }
}
int main()
{
    int gd=DETECT,gm;
    int x,y,x0=0,y0=0,h=10,u=1,r=2,d=3,l=4,n;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    clrscr();
    x=x0;
    y=y0;
    printf("Enter value for n:\n");
    scanf("%d",&n);
    moveto(x,y);
    hilbert(r,d,l,u,n,h,x,y);
    getch();
    closegraph();
    return 0;
}
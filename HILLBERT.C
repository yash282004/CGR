#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
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
    void main()
    {
     int gd=DETECT,gm;
     int x,y,x0=0,y0=0,n,h=10,u=1,r=2,d=3,l=4;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     printf("Enter value for n:");
     scanf("%d",&n);
     x=x0;
     y=y0;
     moveto(x,y);
     cleardevice();
     hilbert(r,d,l,u,n,h,x,y);
     getch();
     closegraph();
     }

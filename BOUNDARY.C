#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void boundary_fill(int,int,int,int);
int main()
{
 int gd=DETECT,gm;
 int fc=4,bc=7;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 clrscr();
 rectangle(50,50,100,100);
 boundry_fill(55,55,fc,bc);
 getch();
 closegraph();
 return 0;
 }
 void boundary_fill(int x,int y, int fc,int bc)
 {
  if(getpixel(x,y)!=fc&&getpixel(x,y)!=bc)
  {
  delay(5);
  putpixel(x,y,fc);
  boundary_fill(x,y-1,fc,bc);
  boundary_fill(x,y+1,fc,bc);
  boundary_fill(x+1,y,fc,bc);
  boundary_fill(x-1,y,fc,bc);
  }
  getch();
  }
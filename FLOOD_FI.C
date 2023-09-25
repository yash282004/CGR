#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int flood_fill(int,int,int,int);
int main()
{
 int gd=DETECT,gm;
 int tc=7,rc=4;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 clrscr();
 rectangle(50,50,100,100);
 flood_fill(51,51,tc,rc);
 getch();
 closegraph();
 return 0;
 }
 flood_fill(int x,int y, int tc,int rc)
 {
  if(tc==rc)
  {
  return 0;
  }
  if(getpixel(x,y)!=tc)
  {
  return 0;
  }
  delay(5);
  putpixel(x,y,rc);
  flood_fill(x,y-1,tc,rc);
  flood_fill(x,y+1,tc,rc);
  flood_fill(x+1,y,tc,rc);
  flood_fill(x-1,y,tc,rc);
  getch();
  return 0;
  }

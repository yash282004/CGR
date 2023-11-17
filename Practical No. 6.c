// Practical No. 6: Program to fill polygon.(boundary fill);


#include<stdio.h>
#include<graphics.h>
#include<dos.h>
 
void boundaryfill(int x,int y,int f_color,int b_color)
{
if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
{
delay(10);
putpixel(x,y,f_color);
boundaryfill(x+1,y,f_color,b_color);
boundaryfill(x,y+1,f_color,b_color);
boundaryfill(x-1,y,f_color,b_color);
boundaryfill(x,y-1,f_color,b_color);
}
}

int main()
{
int gm,gd=DETECT;
int fc=4,bc=15;

initgraph(&gd,&gm,"c:\\tc\\bgi");
rectangle(50,50,100,100);
boundaryfill(75,75,fc,bc);
closegraph();
return 0;
}
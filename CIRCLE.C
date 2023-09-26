#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
int center_x,center_y,x,y,r,d;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter center coordinates of circle :");
scanf("%d%d",&center_x,&center_y);
printf("enter radius of cirlce :");
scanf("%d",&r);
putpixel(center_x,center_y,WHITE);

d=3-2*r;
x=0;
y=r;
do
{
	putpixel(center_x+x,center_y+y,WHITE);
	putpixel(center_x+x,center_y-y,WHITE);
	putpixel(center_x-x,center_y+y,WHITE);
	putpixel(center_x-x,center_y-y,WHITE);
	putpixel(center_x+y,center_y+x,WHITE);
	putpixel(center_x+y,center_y-x,WHITE);
	putpixel(center_x-y,center_y+x,WHITE);
	putpixel(center_x-y,center_y-x,WHITE);
	if(d<0)
	{
	d=d+4*x+6;
	}
	else
	{
	d=d+4*(x-y)+10;
	y=y-1;
	}
	x=x+1;
	}while(x<y);
	getch();
	closegraph();
	return 0;
	}
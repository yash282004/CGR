#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
int x,y,x1,y1,x2,y2,length,xinc,yinc,i,dx,dy;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

printf("Enter x1 and y1 :");
scanf("%d%d",&x1,&y1);
printf("Enter x2 and y2 :");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(dx>dy)
length=dx;
else
length=dy;
xinc=dx/length;
yinc=dy/length;
x=x1+0.5;
y=y1+0.5;
putpixel(x,y,RED);
for(i=0;i<length;i++)
	{
	 putpixel(x,y,RED);
	 x=x+xinc;
	 y=y+yinc;
	}
	getch();
	return 0;
	closegraph();
	}
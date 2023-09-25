#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
int gd=DETECT,gm;
int x1,x2,dx,dy,pk,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("Enter x1 and y1");
scanf("%d%d",&x1,&y1);
printf("Enter x2 and y2");
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
		 pk=pk+(2*dy);
		 putpixel(x1++,y1,RED);
		 }
		 else
		 {
		 pk=pk+(2*dy-2*dx);
		 putpixel(x1++,y1++,RED);
		 }
		}
	}
	else
	{
	pk=2*dx-2dy;
	for(i=0;i<dy;i++)
	{
		if(pk<0)
		{
		pk=pk+2*dx;
		putpixel(x1,y1++,RED);
		}
		else
		{
		pk=pk+(2*dx-2*dy);
		putpixel(x1++,y1++,RED);
		}
		}
	}
	getch();
	return 0;
	getch();
}


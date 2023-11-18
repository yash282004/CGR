// Practical No. 8: Program for 2D transformation (rotation)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
   int gd=DETECT,gm;
   int x1,y1,x2,y2,x3,y3,theta;
   initgraph(&gd,&gm,"C:\\tc\\bgi");
   clrscr();
   printf("Enter x1 and y1 co-ordinates of triangle:");
   scanf("%d%d",&x1,&y1);
   printf("Enter x2 and y2 co-ordinates of triangle:");
   scanf("%d%d",&x2,&y2);
   printf("Enter x3 and y3 co-ordinates of triangle:");
   scanf("%d%d",&x3,&y3);
   printf("Co-ordinates before scaling:");
   printf("\nx1=%d\ty1=%d",x1,y1);
   printf("\nx2=%d\ty2=%d",x2,y2);
   printf("\nx3=%d\ty3=%d",x3,y3);
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x3,y3,x1,y1);
   printf("Enter value of radian:");
   scanf("%d",&theta);
   x1=(x1*cos(theta))-(y1*sin(theta));                 //positive angle rotation
   y1=(x1*sin(theta))+(y1*cos(theta));                // R=[cos theta      sin theta ]
   x2=(x2*cos(theta))-(y2*sin(theta));                 //   -sin theta      cos theta
   y2=(x2*sin(theta))+(y2*cos(theta));
   x3=(x3*cos(theta))-(y3*sin(theta));
   y3=(x3*sin(theta))+(y3*cos(theta));
   printf("Co-ordinates after rotation:");
   printf("\nx1=%d\ty1=%d",x1,y1);
   printf("\nx2=%d\ty2=%d",x2,y2);
   printf("\nx3=%d\ty3=%d",x3,y3);
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x3,y3,x1,y1);
   getch();
   return 0;

}
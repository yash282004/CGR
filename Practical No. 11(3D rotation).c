// Practical No. 11: Program for 3D transformation (rotation)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
   int gd=DETECT,gm;
   int x1,y1,z1,x2,y2,z2,x3,y3,z3,theta;
   initgraph(&gd,&gm,"C:\\turboc3\\bgi");
   clrscr();
   printf("Enter x1,y1,z1 co-ordinates of triangle:");
   scanf("%d%d%d",&x1,&y1,&z1);
   printf("Enter x2,y2,z2 co-ordinates of triangle:");
   scanf("%d%d%d",&x2,&y2,&z2);
   printf("Enter x3,y3,z3 co-ordinates of triangle:");
   scanf("%d%d%d",&x3,&y3,&z3);
   printf("Co-ordinates before rotation:");
   printf("\nx1=%d\ty1=%d\tz1=%d",x1,y1,z1);
   printf("\nx2=%d\ty2=%d\tz2=%d",x2,y2,z2);
   printf("\nx3=%d\ty3=%d\tz3=%d",x3,y3,z3);
   printf("\nEnter values of radian:");
   scanf("%d",&theta);
   //x-axis rotation
   x1=x1;
   y1=(y1*cos(theta))-(z1*sin(theta));
   z1=(y1*sin(theta))+(z1*cos(theta));
   x2=x2;
   y2=(y2*cos(theta))-(z2*sin(theta));
   z2=(y2*sin(theta))+(z2*cos(theta));
   x3=x3;
   y3=(y3*cos(theta))-(z3*sin(theta));
   z3=(z3*sin(theta))+(z3*cos(theta));
   printf("Co-ordinates after rotation:");
   printf("\nx1=%d\ty1=%d\tz1=%d",x1,y1,z1);
   printf("\nx2=%d\ty2=%d\tz2=%d",x2,y2,z2);
   printf("\nx3=%d\ty3=%d\tz3=%d",x3,y3,z3);
   getch();
   return 0;

}
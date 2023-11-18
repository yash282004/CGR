// Practical No. 10: Program for 3D transformation (3D translation)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
   int gd=DETECT,gm;
   int x1,y1,z1,x2,y2,z2,x3,y3,z3,tx,ty,tz;
   initgraph(&gd,&gm,"C:\\turboc3\\bgi");
   clrscr();
   printf("Enter x1,y1,z1 co-ordinates of triangle:");
   scanf("%d%d%d",&x1,&y1,&z1);
   printf("Enter x2,y2,z2 co-ordinates of triangle:");
   scanf("%d%d%d",&x2,&y2,&z2);
   printf("Enter x3,y3,z3 co-ordinates of triangle:");
   scanf("%d%d%d",&x3,&y3,&z3);
   printf("Co-ordinates before translation:");
   printf("\nx1=%d\ty1=%d\tz1=%d",x1,y1,z1);
   printf("\nx2=%d\ty2=%d\tz2=%d",x2,y2,z2);
   printf("\nx3=%d\ty3=%d\tz3=%d",x3,y3,z3);
   printf("\nEnter values of tx,ty,tz:");
   scanf("%d%d%d",&tx,&ty,&tz);
   x1=x1+tx;
   y1=y1+ty;
   z1=z1+tz;
   x2=x2+tx;
   y2=y2+ty;
   z2=z2+tz;
   x3=x3+tx;
   y3=y3+ty;
   z3=z3+tz;
   printf("Co-ordinates after translation:");
   printf("\nx1=%d\ty1=%d\tz1=%d",x1,y1,z1);
   printf("\nx2=%d\ty2=%d\tz2=%d",x2,y2,z2);
   printf("\nx3=%d\ty3=%d\tz3=%d",x3,y3,z3);
   getch();
   return 0;

}
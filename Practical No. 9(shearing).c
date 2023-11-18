// Practical No. 9: Program for 2D transformation (shearing)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
   int gd=DETECT,gm;
   int x1,y1,x2,y2,x3,y3,shx,shy;
   initgraph(&gd,&gm,"C:\\tc\\bgi");
   clrscr();
   printf("Enter x1 and y1 co-ordinates of triangle:");
   scanf("%d%d",&x1,&y1);
   printf("Enter x2 and y2 co-ordinates of triangle:");
   scanf("%d%d",&x2,&y2);
   printf("Enter x3 and y3 co-ordinates of triangle:");
   scanf("%d%d",&x3,&y3);
   printf("Co-ordinates before shearing:");
   printf("\nx1=%d\ty1=%d",x1,y1);
   printf("\nx2=%d\ty2=%d",x2,y2);
   printf("\nx3=%d\ty3=%d",x3,y3);
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x3,y3,x1,y1);
   printf("\nEnter value of shx :");
   scanf("%d",&shx);
   //X-shear
   x1=x1+shx*y1;
   y1=y1;
   x2=x2+shx*y2;
   y2=y2;
   x3=x3+shx*y3;
   y3=y3;
   printf("Co-ordinates after shearing:");
   printf("\nx1=%d\ty1=%d",x1,y1);
   printf("\nx2=%d\ty2=%d",x2,y2);
   printf("\nx3=%d\ty3=%d",x3,y3);
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x3,y3,x1,y1);
   getch();
   return 0;

}
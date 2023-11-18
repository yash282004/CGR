// Practical No. 10: Program for 3D transformation (scaling)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    int x1,y1,z1,x2,y2,z2,x3,y3,z3,sx,sy,sz;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("Enter coordinates of traingle:\n");
    printf("Enter coordinate for first vertices:\n");
    scanf("%d%d%d",&x1,&y1,&z1);
    printf("Enter coordinate for second vertices:\n");
    scanf("%d%d%d",&x2,&y2,&z2);
    printf("Enter coordinate for third vertices:\n");
    scanf("%d%d%d",&x3,&y3,&z3);
    printf("coordinates before scaling:\n");
    printf("x1=%d\ty1=%d\tz1=%d\n",x1,y1,z1);
    printf("x2=%d\ty2=%d\tz2=%d\n",x2,y2,z2);
    printf("x3=%d\ty3=%d\tz3=%d\n",x3,y3,z3);
 
    printf("Enter translation vector sx , sy and sz:\n");
    scanf("%d%d%d",&sx,&sy,&sz);
    x1=x1*sx;
    y1=y1*sy;
    z1=z1*sz;
    x2=x2*sx;
    y2=y2*sy;
    z2=z2*sz;
    x3=x3*sx;
    y3=y3*sy;
    z3=z3*sz;
    printf("coordinates after scaling:\n");
    printf("x1=%d\ty1=%d\tz1=%d\n",x1,y1,z1);
    printf("x2=%d\ty2=%d\tz2=%d\n",x2,y2,z2);
    printf("x3=%d\ty3=%d\tz3=%d\n",x3,y3,z3);
  
    getch();
    closgraph();
    return 0;
    
}
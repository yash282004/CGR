// Practical No. 7: Program for 2D transformation (scaling)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3,sx,sy;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("Enter coordinates of traingle:\n");
    printf("Enter coordinate for first vertices:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinate for second vertices:\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter coordinate for third vertices:\n");
    scanf("%d%d",&x3,&y3);
    printf("coordinates before scaling:\n");
    printf("x1=%d\ty1=%d\n",x1,y1);
    printf("x2=%d\ty2=%d\n",x2,y2);
    printf("x3=%d\ty3=%d\n",x3,y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    printf("Enter translation vector sx and sy:\n");
    scanf("%d%d",&sx,&sy);
    x1=x1*sx;
    y1=y1*sy;
    x2=x2*sx;
    y2=y2*sy;
    x3=x3*sx;
    y3=y3*sy;
    printf("coordinates after scaling:\n");
    printf("x1=%d\ty1=%d\n",x1,y1);
    printf("x2=%d\ty2=%d\n",x2,y2);
    printf("x3=%d\ty3=%d\n",x3,y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    getch();
    closgraph();
    return 0;
    
}
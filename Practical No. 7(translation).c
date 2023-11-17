// Practical No. 7: Program for 2D transformation (Translation)


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
    int gd=DETECT,gm;
    int x1,y1,x2,y2,x3,y3,tx,ty;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    printf("Enter coordinates of traingle:\n");
    printf("Enter coordinate for first vertices:\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinate for second vertices:\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter coordinate for third vertices:\n");
    scanf("%d%d",&x3,&y3);
    printf("coordinates before translation:\n");
    printf("x1=%d\ty1=%d\n",x1,y1);
    printf("x2=%d\ty2=%d\n",x2,y2);
    printf("x3=%d\ty3=%d\n",x3,y3);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    printf("Enter translation vector tx and ty:\n");
    scanf("%d%d",&tx,&ty);
    x1=x1+tx;
    y1=y1+ty;
    x2=x2+tx;
    y2=y2+ty;
    x3=x3+tx;
    y3=y3+ty;
    printf("coordinates before translation:\n");
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
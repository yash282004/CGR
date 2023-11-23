#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void main()
{
    int gd = DETECT, gm, i = 1, r,center_x,center_y;
    float x1, y1, ep;

    // Initialize the graphics system
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Input radius from the user
    printf("Enter coordinates for centre of circle:\n");
    scanf("%d%d",&center_x,&center_y);
    printf("Enter Radius:");
    scanf("%d", &r);

    // Loop to find a suitable value for ep
    while (r > pow(2, i))
    
    {
        i++;
    }
    ep =1/ pow(2, i);

    // Initialize starting points
    x1 = r;
    y1 = 0;
  

    do
    {
        x1 = x1 + (y1 * ep);
        y1 = y1 - (x1 * ep);
        
        // Draw the pixel at (x2+200, y2+200) with color 10
        putpixel(x1 + center_x, y1 + center_y, WHITE);

       // x1 = x2;
       // y1 = y2;

    } while (  y1 < ep || r-x1> ep);

    // Wait for a key press before closing the graphics window
    getch();
}

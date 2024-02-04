#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gm, gd = DETECT;
    int x1 = 100, y1 = 300, x2 = 300, y2 = 300; // coordinates of the line
    int x3=300,x4=300,y3=300,y4=100;
    int x5 = 100, x6 = 100, y5 = 100, y6 = 300;
    int x7 = 300, x8 = 100, y7 = 100, y8 = 100;

    char data[] = "C:\\MinGW\\lib\\libbgi.a"; // static file

    initgraph(&gd, &gm, data);
    cleardevice();
    setcolor(RED);
    setlinestyle(SOLID_LINE, 0, 10);
        // Draw the line
        line(x1, y1, x2, y2);
    line(x3,y3,x4,y4);
    line(x5,y5,x6,y6);
    line(x7,y7,x8,y8);

    getch();
    closegraph();

    return 0;
}

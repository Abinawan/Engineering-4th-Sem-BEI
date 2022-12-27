#include<stdio.h>

#include<graphics.h>

#include<conio.h>

#include<stdlib.h>

int main() {
    int gdrive = DETECT, gmode;
    initgraph( & gdrive, & gmode, "C:\\TURBOC3\\BGI");
    int x1, y1, x2, y2, dx, dy, p, x, y;
    printf("Enter starting coordinate(x,y): ");
    scanf("%d%d", & x1, & y1);
    printf("Enter ending coordinate(x,y): ");
    scanf("%d%d", & x2, & y2);
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    x = x1;
    y = y1;
    putpixel(x, y, RED);
    if (dx > dy) {
        p = p + 2 * dy - dx;
        do {
            if (x2 > x1) {
                x = x + 1;
            } else {
                x = x - 1;
            }
            if (p < 0) {
                y = y;
                p = p + 2 * dy;
            } else {
                y = y + 1;
                p = p + 2 * dy - 2 * dx;
            }
            putpixel(x, y, RED);

        } while (x != x2);
    } else {
        p = 2 * dx - dy;
        do {
            if (y2 > y1) {
                y = y + 1;
            } else {
                y = y - 1;
            }
            if (p < 0) {
                x = x;
                p = p + 2 * dx;
            } else {
                x = x + 1;
                p = p + 2 * dx - 2 * dy;
            }
            putpixel(x, y, RED);
        } while (y != y2);
    }
    getch();
    closegraph();
    return 0;
}

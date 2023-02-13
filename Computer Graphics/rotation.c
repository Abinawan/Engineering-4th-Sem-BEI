#include<stdio.h>
#include<graphics.h>
#include<math.h>

int main()
{
    int gd = DETECT, gm;
    initwindow(1000, 1000);
    float x1, x2, y1, y2, phi;
    printf("Enter starting coordinate: ");
    scanf("%f%f", &x1, &y1);
    printf("Enter ending coordinate: ");
    scanf("%f%f", &x2, &y2);
    line(x1, y1, x2, y2);
    printf("Enter the angle you want to rotate: ");
    scanf("%f", &phi);
    phi = (3.14 / 180) * phi;
    x2 = x2 * cos(phi) - y2 * sin(phi);
    y2 = y2 * cos(phi) + x2 * sin(phi);
    x1 = x1 * cos(phi) - y1 * sin(phi);
    y1 = y1 * cos(phi) + x1 * sin(phi);
    line(x1, y1, x2, y2);
    getch();
    closegraph();
    return 0;
}

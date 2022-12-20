#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
int gdrive= DETECT, gmode;
int x1,step=0, x2, y1, y2, k, dx, dy;
float x, y, xinc, yinc;
initgraph(&gdrive, &gmode, "C:\\TurboC3\\BGI");

printf("Enter starting and ending points:");
scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
{
step=abs(dx);
}
else
{
step=abs(dy);
}
xinc=dx/step;
yinc=dy/step;
x=x1;
y=y1;
for(k=0; k<step; k++)
{
putpixel(x, y, WHITE);
x=x+xinc;
y=y+yinc;
}
outtextxy(x1, y1, "(1)");
ottextxy(x2, y2, "(100, 100)");
outtext(1, 105, "DDA Algirithm");
getch();
closegraph();
return(0);
}

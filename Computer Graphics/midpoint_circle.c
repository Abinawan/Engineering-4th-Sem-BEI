#include<stdio.h>
#include<graphics.h>
#include<graphics.h>
int main()
{
int gdrive = DETECT , gmode;
int x , y, xc, yc, r, p;
initgraph(&gdrive,&gmode,"C:\\TURBOC#\\BGI");
printf("Enter center of circle: ");
scanf("%d%d",&xc,&yc);
printf("Enter the radius of circle: ");
scanf("%d",&r);
p = (5/4)-r;
x = 0;
y = r;
putpixel(x+xc,y+yc,WHITE);
putpixel(x+xc, yc-y,WHITE);
putpixel(y+yc,x+xc,WHITE);
putpixel(yc-y,x+xc,WHITE);
do
{
	if(p<0)
	{
		x = x+1;
		y = y;
		p = p + (2*x)+3;
	}
	else
	{
		x = x + 1;
		y = y - 1;
		p = p +2* (x -y) + 5;
	}
	putpixel(x+xc,y+yc,WHITE);
	putpixel(y+yc,x+xc,WHITE);
	putpixel(yc-y,x+xc,WHITE);
	putpixel(x+xc,yc-y,WHITE);
	putpixel(xc-x,yc-y,WHITE);
	putpixel(yc-y,xc-x,WHITE);
	putpixel(y+yc,xc-x,WHITE);
	putpixel(xc-x,y+yc,WHITE);
	delay(100);
}while(x<y);
getch();
closegraph();
return 0;
}

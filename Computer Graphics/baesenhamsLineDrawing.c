// BY KAUSHAL SHRESTHA

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main(){
	int gd=DETECT,gm,x,y,x1,y1,dx,dy,p,lx,ly;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	printf("enter the value of x1,y1,x2,y2 \n");
	scanf("%d%d%d%d",&x,&y,&x1,&y1);
	if(x>x1){
		lx=-1;
	} else {
		lx=1;
	}
	if(y>y1){
		ly=-1;
	} else {
		ly=1;
	}
	dx=abs(x1-x);
	dy=abs(y1-y);
	if(dx>dy){
		p=2*dy-dx;
		while(x!=x1){
			if (p<0){
				putpixel(x,y,RED);
				p=p+2*dy;
			} else {
				putpixel(x,y,RED);
				p= p+2*dy-2*dx;
				y=y+ly;
			}
			x=x+lx;
		}
	} else {
		p=2*dx-dy;
		while(y!=y1){
			if (p<0){
				putpixel(x,y,RED);
				p=p+2*dx;
			} else {
				putpixel(x,y,RED);
				p= p+2*dx-2*dy;
				x=x+lx;
			}
			y=y+ly;
		}
	}
	outtextxy(x1+20,y1+20,"BESERNHANS ALGORITH");
	getch();
	closegraph();
}








#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd = DETECT, gm;
    initwindow(1000,1000);
    int x1,x2,y1,y2,sx,sy;
    printf("Enter starting coordinate: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter ending coordinate: ");
    scanf("%d%d",&x2,&y2);
    line(x1,y1,x2,y2);
    printf("Enter the scaling factor sx and sy: ");
    scanf("%d%d",&sx,&sy);
    line(x1*sx,y1*sy,x2*sx,y2*sy);
    getch();
    closegraph();
    return 0;
    
}

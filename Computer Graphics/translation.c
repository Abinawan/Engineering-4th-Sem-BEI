#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd = DETECT, gm;
    initgraph( & gd, & gm, "C:\TC\BGI");
    int x1,x2,y1,y2,tx,ty;
    printf("Enter starting coordinate: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter ending coordinate: ");
    scanf("%d%d",&x2,&y2);
    line(x1,y1,x2,y2);
    printf("Enter the translation factor tx and ty: ");
    scanf("%d%d",&tx,&ty);
    line(x1+tx,y1+ty,x2+tx,y2+ty);
    getch();
    closegraph();
    return 0;
    
}

//reflection
#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
	int gd = DETECT, gm;
    initwindow(640,480);
    line(0,240,640,240);
    line(320,0,320,480);
    int x1,y1,x2,y2,choice;
    printf("Enter starting diagonal: ");
    scanf("%d%d",&x1,&y1);
    printf("Enter ending diagonal: ");
    scanf("%d%d",&x2,&y2);
//    printf("What do you want to do:\n)0.Reflection in X-axis\n1.Reflection in Y-axis\n2.Reflection in both axis");
//    scanf("%d",&choice);
    rectangle(x1,y1,x2,y2);
    while(1)
    {
	printf("What do you want to do:\n)0.Reflection in X-axis\n1.Reflection in Y-axis\n2.Reflection in both axis");
    scanf("%d",&choice);
    switch (choice)
    {
    	case 0:
    		rectangle(x1,480-y1,x2,480-y2);
			break;
		case 1:
			rectangle(640-x1,y1,640-x2,y2);
			break;
		case 2:
			rectangle(640-x1,480-y1,640-x2,480-y2);
			break;
		default:
			exit(0);    	
    		
	}
	
    }
    getch();
    closegraph();
    return 0;
    
}

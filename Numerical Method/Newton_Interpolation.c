#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the degree of polynomial n:");
    scanf("%d",&n);
    float x[n], a[n][n],xp,p,l[n];
    for(i=0;i<=n;i++)
    {
        printf("Enter x[%d] and f[%d]: ",i+1,i+1);
        scanf("%f%f",&x[i],&a[0][i]);
     } 
    printf("Enter interpolation value: ");
    scanf("%f",&xp);
    for(i=1;i<=n;i++)
    {
        
        
        for(j=0;j<=n -i;j++)
        {
            a[i][j] = (a[i-1][j+1] - a[i-1][j]) /(x[i+j]-x[j]);
        }
        
    }
    p =a[0][0];
    for(i=1;i<=n;i++)
    {
        
        l[i] =1;
        for(j=0;j<= i-1;j++)
        {
            l[i] = l[i] * (xp - x[j]);
        }
        p = p + a[i][0] * l[i];
    }
    printf("The result is: %f",p);
}

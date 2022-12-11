#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the degree of polynomial n:");
    scanf("%d",&n);
    float x[n], f[n],xp,p,l[n];
    for(i=0;i<n;i++)
    {
        printf("Enter x[%d] and f[%d]: ",i+1,i+1);
        scanf("%f%f",&x[i],&f[i]);
     } 
    printf("Enter interpolation value: ");
    scanf("%f",&xp);
    for(i=0;i<n;i++)
    {
        
        l[i] = 1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                l[i] = l[i] * ((xp - x[j])/(x[i] -x[j]));
            }
        }
        p = p + f[i] * l[i];
    }
    printf("The result is: %f",p);
}

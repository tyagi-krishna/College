#include <stdio.h>
int main(void)
{
    int n ,i ,x;
    printf("enter the number : ");
    scanf("%d",&n);
    int y = n;     

    for(x =1 ; x<=n ; x++)
    { 
        for(int q = n ; q>x; q--)
        {
            printf("%d",q);
        }
        for(int j = 2*x-1 ; j>0 ; j--)
        {
            printf("%d",x);
        }
        for(int q = x+1 ; q<=n; q++)
        {
            printf("%d",q);
        }
        printf("\n");
    }
}

/* Programs included are:
1.  sum of diagonal , product of diagonal.
2.  delete duplicate elements form an array.
3.  merge two arrays and then sort them in ascending order.
4.  printing non-zero element of a sparse matrix.






/*#include <stdio.h>
int main()
{
    int r ,c ,sum = 0 , product =1 ;
    printf("enter the number of rows and columns:\n");
    scanf("%d%d", &r , &c);
    if(r==c)
    {
        int a[r][c];
        printf("enter the elements of the matrix:\n");
        for(int i = 0 ; i<r ;i++)
        {
            for(int j= 0 ; j<c ; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("The number of elements in the matrix is: %d\n", r*c);
        for(int i = 0 ; i<r ;i++)
        {
            for(int j= 0 ; j<c ; j++)
            {
                if(i == j )
                {
                    sum = sum + a[i][j];
                }
            }
        }
        printf("The sum of diagonal elements is: %d\n",sum);
            for(int i = 0 ; i<r ;i++)
        {
            for(int j= 0 ; j<c ; j++)
            {
                if(i == j )
                {
                    product = product*a[i][j];
                }
            }
        }
        printf("The product of diagonal elements is %d\n" , product);
    }
    else
    {
        printf("The matrix should be a square matrix.\n");
        return 0;
    }

}  */

/*#include <stdio.h>
int main()
{
    int n ,count = 0;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(int i= 0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i= 0 ; i<n ; i++)
    {
        if(a[i] == 0)
        {
            count++;
        }
    }
    for(int i = 0 ; i<n ; i++)
    {
        for(int j= i+1 ; j<n ; j++)
        {
            if(a[i] == a[j])
            {
                a[j]=0;
            }
        }
    }
    printf("after deleting duplicates the array is:\n");
    for(int i = 0 ; i<n ;i++)
    {
        if(a[i] != 0)
        {
            printf("%d\n",a[i]);
        }
    }
    if(count!=0)
    {
        printf("0\n");
    }
}*/

/*#include <stdio.h>
int main()
{
    int n1 , n2 , temp;
    printf("Enter the number of elements in first array:\n");
    scanf("%d",&n1);
    printf("Enter the number of elements of second array:\n");
    scanf("%d",&n2);
    int n3 = n1+n2;
    int a[n1] , b[n2] , c[n3];
    printf("Enter the elements of array 1:\n");
    for(int i = 0 ; i<n1 ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array 2:\n");
    for(int i = 0 ; i<n2 ; i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i = 0 ; i<n1 ; i++)
    {
        c[i] = a[i];
    }
    for(int i = n1 ; i<n3 ; i++)
    {
        c[i] = b[i-n1];
    }
    for(int i = 0 ; i<n3 ; i++)
    {
        for(int j = i+1 ; j<n3 ; j++)
        {
            if(c[i] > c[j] )
            {
                temp = c[j];
                c[j] = c[i];
                c[i] = temp;
            }
        }
    }
    for(int i = 0 ; i<n3 ; i++)
    {
        printf("%d\n",c[i]);
    }
}*/

/*#include <stdio.h>
int main()
{
    int nc ,nr ,n ;
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&nr , &nc);
    printf("Enter the number fo non-zero elements:\n");
    scanf("%d",&n);
    int elements = nr*nc , r[n] , c[n] , v[n] ;;
    if(n<elements)
    {
        int r[n] , c[n] , v[n] ;
        for(int i = 0 ; i<n ; i++)
        {
            printf("Enter the row, column and values of non-zero elements:\n");
            scanf("%d",&r[i]);
            scanf("%d",&c[i]);
            scanf("%d",&v[i]);
        }
        printf("The sparse matrix is:\n");
        printf("row    column  value\n");
        for(int i = 0 ; i<n ; i++)
        {
            printf("%d       %d       %d\n" , r[i] , c[i] , v[i]);
        }
    }
    else
   {
        printf("Please enter correct informations.");
        return 0;
    }
}*/
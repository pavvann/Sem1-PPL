#include <stdio.h>
/*
//5
int main ()
{
    int n;
    printf("Enter the number n\n");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
//4
int main()
{
    int n; 
    float sum=0;
    printf("Enter the number\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0/i;
    }
    printf("%.2f", sum);
    return 0;
}
*/
/*
//3
int main()
{
    int n, r, sum=0;
    scanf("%d", &n);

    while (n>0)
    {
        r = n%10;
        sum = sum+r;
        n=n/10;
    }
    printf("%d", sum);
    return 0;
}
*/
/*
//2
int main()
{
    int x, y, product=0;
    scanf("%d%d", &x,  &y);

    for (int i  = 0; i < x; i++)
    {
        product = product + y;
    }
    printf("%d", product);
    return 0;
}
*/

//1
int main()
{
    int n, r ,sum;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        while (i>0)
        {
            r = i % 10;
            sum = sum + (r*r*r);
            i=i/10;
        
        if (i == sum)
            {
                printf("%d is a Armstrong Number\n", i);
            }
        }

    }
    return 0;
}
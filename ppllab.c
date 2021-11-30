// exp-5

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
/*
//1
int main()
{
    int n, r ,sum, j;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        j = i;
        sum = 0;
        while (j>0)
        {
            r = j % 10;
            sum = sum + (r*r*r);
            j=j/10;
        }

        if (i == sum)
            {
                printf("%d is a Armstrong Number\n", i);
            }
    }
    return 0;
}
*/

// exp-4
/*
//1
int main ()
{
    int a, b, c;
    printf("enter the numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && a>c)
    {
        printf("%d is largest", a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the largest", b);
    }
    else
    {
        printf("%d is the largest", c);
    }
    return 0;
}
*/

/*
//2

int main ()
{
    int n;
    printf("enter the year: ");
    scanf("%d", &n);

    if (n % 400 == 0 && n % 100 == 0)
    {
        printf("%d is a leap year", n);
    }
    else if (n % 4 == 0)
    {
        printf("%d is a leap year", n);
    }
    else
        printf("%d is not a leap year", n);
}
*/
/*
DOUBT
// 3
#include <math.h>
int main()
{
    int a, b, c;
    printf("enter the coefficients of x^2, x, and c respectively\n");
    scanf("%f%f%f", &a, &b, &c);
    int D;
    D = b * b - 4 * a * c;
    //printf("%f", D);

    if (D > 0)
        
    {
        printf("r1 = %d, r2 = %d", -b + sqrt(D) / 2 * a, -b - sqrt(D) / (2 * a));
    }

    else if (D == 0)
    {
        printf("r1 = r2 = %d", -b/(2*a));
    }

    else 
    {
        printf("roots are imaginary");
    }

    return 0;
}
*/


//4

int main()
{
    char a;
    printf("enter the character\n");
    scanf("%c", &a);
    
    switch (a)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is a vowel", a);
            break;
    default:
        printf("%c is a consonant", a);
    }
    return 0;
}

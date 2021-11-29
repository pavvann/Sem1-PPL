#include <stdio.h>

int armstrong(int n)
{
    int k;
    k = n;
    int sum = 0;
    while (k > 0)
    {
        int r = k % 10;
        sum += r * r * r;
        k = k / 10;
    }
    if (n == sum)
        printf("%d is a armstrong number", n);
    else
        printf("%d is not an armstrong number", n);
    return 0;
}

int coprime(int n)
{
    int m, l, sum = 0;
    m = n;
    while (m>0)
    {
        l = m%10;
        sum = sum*10 + l;
        m = m / 10;
    }
    int c;
    if (m>=n)
    {
        c = m;
    }
    else
    {
        c = n;
    }
    for (int i = 2; i<=c/2; i++)
    {
        if (m % i == 0 && n % i == 0)
            printf("they are not coprime");
    
        else 
            printf("they are coprime");
    }        
    return 0;
}

int main()
{
    int n;
    printf("enter n: \n");
    scanf("%d", &n);
    int armstrong(int n);
    int coprime(int n);
    return 0;
}
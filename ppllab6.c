#include <stdio.h>

//1
/*
void armstrong(int n)
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
}

void coprime(int n)
{
    int m, l, sum = 0, hcf;
    m = n;
    while (m>0)
    {
        l = m%10;
        sum = sum*10 + l;
        m = m / 10;
    }
    int c;
    
    if (sum>=n)
        c = sum;
    else
        c = n;

    for (int i = 1; i<=c/2; i++)
    {
        if (sum % i == 0 && n % i == 0)
            hcf = i;
    }        
    if (hcf == 1)
        printf("\n%d and %d are co-prime", n, sum);
    else
        printf("\n%d and %d are not co-prime", n, sum);
}

double factorial(double n)
{
    if (n<=1)
        return 1;
    else 
        return (n*factorial(n-1));
}

int main()
{
    int n;
    printf("enter n: \n");
    scanf("%d", &n);
    armstrong(n);
    coprime(n);
    printf("\nfactorial of %d = %.0lf", n, factorial(n));
    return 0;
}*/



/*
//2
int triangle_area(int base, int height)
{
    int area;
    area = base * height/2;
    return area;
}

void swap(int *a, int *b)
{
    printf("\nx = %d, y = %d", *b, *a);
}

float* remainde(int a, int b)
{
    float r;
    r = a/b;
    return &r;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%d", triangle_area(x,y));
    swap(&x,&y);
    printf("\n%p", remainde(x,y));
    return 0;
}*/

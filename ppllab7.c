#include <stdio.h>
/*
//3
//Convert uppercase string to lowercase using for loop

int main()
{
    
    char a[100];
    printf("Enter string: ");
    scanf("%[^\n]s", a);

    for (int i = 0; i <100; i++)
    {
        if (a[i]>='A' && a[i]<='Z')
            {
                a[i] = a[i] + 32;
            }
    }

    printf("%s", a);
    return 0;   
}
*/






//1
//Find sum of all array elements using recursion.

int sum(int a[], int n)
{ 
    if (n==0)
    {
        return 0;
    } 
    else 
    {

    return a[n-1]+sum(a,n-1);
    }
}

int  main()
{
    int n;
    printf("enter the numer of elements: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d", sum(a, n));
    return 0;
        
}
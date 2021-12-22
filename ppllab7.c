#include <stdio.h>

/*3
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
}*/


/*1
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
        
}*/


//2

int main()
{
    int a1[100];
    int n;
    printf("enter the number of elements in your array (max 100): ");
    scanf("%d", &n);

    printf("\nenter the elements of the array: \n");
    for (int k = 0; k < n; k++)
    {
        scanf("%d", &a1[k]);
    }

    printf("\nthe array you entered is: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a1[k]);
    }
    
    int x, i;
    printf("\n\nenter the number you want to insert: ");
    scanf("%d", &x);
    printf("enter the position of your new number in the array: ");
    scanf("%d", &i);

    n = n+1;

    for (int k = n - 1; k > i - 1; k--)
    {
        a1[k] = a1[k-1];
    }
    a1[i-1] = x;

    printf("\n\nupdated array: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a1[k]);
    }
    
    int j;
    printf("\n\nenter the position of element you want to delete: ");
    scanf("%d", &j);
    

    for (int k = j-1; k < n; k++)
    {
        a1[k] = a1[k+1];
    }
    n--;

    printf("\n\nupdated array: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a1[k]);
    }
    

    
    
}
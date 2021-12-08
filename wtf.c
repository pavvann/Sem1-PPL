#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int x = abs(a);
    int y = abs(b);
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum += y;
    }
    if (a<0 && b<0)
        printf("%d", sum);
    else if (a<0 || b<0)
        printf("-%d", sum);
    else
        printf("%d", sum);
    
    return 0;
}
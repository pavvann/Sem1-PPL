
#include <stdio.h>

int main()

{
	int ro, film=0;
 
	printf("Enter the Number\n");
	scanf("%d", &ro);
	
	do
	{
		printf("%d\n", film+1);
		film=film+1;
	}while(film<ro);

	return 0;

}
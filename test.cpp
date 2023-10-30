#include <stdio.h>

int main()
{
	char nishu[][10] = {"one","two","three","four","five","six","seven","eight","nine"};
	
	int n;
	printf("Enter N :");
	scanf("%d",&n);
	
	if(n <= 0 || n >=10)
		printf("Out of Range");
	else
		printf(nishu[n - 1]);
	return 0;
}

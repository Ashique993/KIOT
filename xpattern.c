#include<stdio.h>
int main()
{
 	int i, j, k, rows; 
 	printf("Please Enter Number of rows =  ");
 	scanf("%d", &rows);

	//k = rows * 2 - 1;

	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows; j++)
		{
			if(j == i || j == (rows - i + 1))
			{
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}
 	return 0;
}

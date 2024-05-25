#include<stdio.h>
int main()
{
 	int i, j, k, rows; 
 	printf("Please Enter Number of rows =  ");
 	scanf("%d", &rows);
	char name[]="balaji";
	//k = rows * 2 - 1;

	for(i = 1; i <= strlen(name); i++)
	{
		for(j = 1; j <= strlen(name); j++)
		{
			if(j == i || j == (strlen(name) - i + 1))
			{
				printf("%c",name[i]);
			}
			printf(" ");
		}
		printf("\n");
	}
 	return 0;
}

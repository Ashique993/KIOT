#include<stdio.h>
int main()
{
 	int i, j;
 	int rows=6;

	//k = rows * 2 - 1;
	char name[10]="BALAJI";
	int a=0,b=0;
	for(i = 1; i <= rows; i++)
	{
		for(j = 1; j <= rows; j++)
		{
			if(   j == (rows - i + 1))
			{
				printf("%c",name[a]);
				a++;
			}
			else if(i==j){
				printf("%c",name[b]);
				b++;
			}
			printf(" ");
		}
		printf("\n");
	}
 	return 0;
}

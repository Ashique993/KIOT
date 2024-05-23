#include <stdio.h>
int sum(int n);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    //result = sum(number);
    sum(number);

    //printf("sum = %d", result);
    return 0;
}

int sum(int n) {
	printf("n= %d\n",n);
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1);
		printf("%d",n + sum(n-1)); 
		//printf("%d",sum(n-1));
    else
    	//printf("else n=%d",n);
        return n;
}


/*

void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}

*/   

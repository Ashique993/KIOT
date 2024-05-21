main()
{
	int a=10;
	int *b=&a;
	int **c=&b;
	int ***d=&c;
	int ****e=&d;
	printf("a =%d \n",a);
	printf("own b address =%x \n",&b);
	printf("b contains a address =%x \n",b);
	printf("a address =%x \n",&a);
	printf("----------------- \n");
	
	printf("own address of b = %x \n",&b);
	printf("own address of c = %x \n",&c);
	printf("own address of d = %x \n",&d);
	printf("own address of e = %x \n",&e);
	
		printf("----------------- \n");
		
	printf("address b contains = %x \n",b);
	printf("address c contains = %x \n",c);
	printf("address d contains = %x \n",d);
	printf("address e contains = %x \n",e);
	
		printf("----------------- \n");
	
	
}

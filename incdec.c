main()
{
	int a=50;
	
	
	int b= --a - a-- + a++ - ++a - a-- + --a;
	
	
	
	printf("a=%d b=%d",a,b);
}

/*
pre inc/dec

1st pri - memory 
2nd pri - display

post inc/dec

1st pri - display
2nd pri - memory

*/

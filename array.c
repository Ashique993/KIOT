main()
{
	/*int age[-5]={10,20,30,40,50};
	//printf("%d",age[2]);
	int i;
	for(i=5;i<5;i++)
	{
		printf("%i \n",age[i]);
	}*/
	int age[3]={20,10,5};
	int i,j,temp;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(age[i]>age[j])
			{
				temp=age[i];
				age[i]=age[j];
				age[j]=temp;				
			}
		}
	}
	printf("-------------\n");
	printf("After sorting\n");
	for(i=0;i<3;i++)
	{
		printf("%d \n",age[i]);
	}
}


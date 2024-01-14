#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n,i,sum = 0;
	
	n=5;
	
	//Dynamically allocate memory using malloc()
	
	ptr = (int*)malloc(n*sizeof(int));
	
	for(i=0; i<n ; ++i)
	{
		ptr[i]=i+1;
	}
	
	printf("The elements of the array are: \n");
	
	for(i=0; i<n; ++i)
	{
		printf("%d",ptr[i]);
	}
	
	//Get the new size for the array
	
	n= 10;
	
	//Dynamically re-allocate memory using realloc()
	ptr= (int*)realloc(ptr,n*sizeof(int));
	
	for(i=5; i<n;++i)
	{
		ptr[i]=i+1;
	}
	
	printf("\n The elements of the array are : \n");
	for(i=0;i<n;++i)
	{
		printf("%d",ptr[i]);
	}
	
	free(ptr);
}

#include<stdio.h>
int main()
{
	int x,y;
	x = 8;
	int *ptr;
	ptr = &x;
	ptr++;
	printf(" %d \n", ptr);
	return 0;
}

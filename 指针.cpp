#include <stdio.h>

int main(void)
{
	int a[10] = {1,2,3,4,5,6,7,8,9};
	int *p = &a[1];
	
	printf("%d\n",p[6]);
	return 0;
 } 

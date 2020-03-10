#include <stdio.h>

unsigned char bit_reverse(unsigned char c)
{
	unsigned char buf = 0;
	int bit = 8;
	while(bit){
		bit--;
		buf |= ((c & 1) << bit);
		c >>= 1;
	}
	return buf;
 } 


int main(void)
{
	unsigned char num;
	printf("input the reverse num :\n");
	
	scanf("%d",&num);
	printf("the input num is :%x\n",num);
	
	printf("the reversed num :%d\n",bit_reverse(num));
	
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int inverted_order(char *p)
{
	char *s1,*s2,tem;
	s1 = p;
	s2 = s1 + strlen(p) - 1;
	while(s1 < s2){
		tem = *s1;
		*s1 = *s2;
		*s2 = tem;
		s1++;
		s2--;
	}
	
	return 0;
}

char *inverted_order_2(char *src)
{
	int len = strlen(src);
	char *des = (char *)malloc(len + 1);
	char *s = &src[len - 1];
	char *d = des;
	while(len-- != 0){
		*d++ = *s--;
		*d = 0;
		//free(des);
	} 
	
	return des;
}

int main(void)
{
	//char *p = "hello world";//´íÎó 
	char p[] = "hello world";
	
	//inverted_order(p);
	
	char *str = inverted_order_2(p);
	
	printf("str :%s\n",str);
	
	return 0;
}

#include <stdio.h>

int gcd(int a,int b)
{
	return b==0?a:gcd(b,a % b);
}

int main(void)
{
	int a,b;
	printf("请输入两个数：\n");
	scanf("%d%d",&a,&b);
	
	a = gcd(a,b);
	printf("最大公约数是:%d\n",a);
	
	return 0;
}

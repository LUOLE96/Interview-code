#include <stdio.h>

int gcd(int a,int b)
{
	return b==0?a:gcd(b,a % b);
}

int main(void)
{
	int a,b;
	printf("��������������\n");
	scanf("%d%d",&a,&b);
	
	a = gcd(a,b);
	printf("���Լ����:%d\n",a);
	
	return 0;
}

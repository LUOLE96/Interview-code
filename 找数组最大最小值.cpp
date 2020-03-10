#include <stdio.h>

double FindofMax(double *p,int n)
{
	int i,max_i;
	for(max_i = i = 0;i < n;i++){
		if(*(p + max_i) < *(p + i))
			max_i = i;
	}
	return *(p + max_i);
}

double FindofMin(double *p,int n)
{
	int i,min_i;
	for(min_i = i = 0;i < n;i++){
		if(*(p + min_i) > *(p + i))
			min_i = i;
	}
	return *(p + min_i);
}

int main(void)
{
	double a[10];
	int i;
	for(i = 0;i < 10;scanf("%lf",a+i++));
	printf("the max is %f\n",FindofMax(a,10));
	printf("the MIN is %f\n",FindofMin(a,10));
	return 0;
}

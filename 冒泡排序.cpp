#include <stdio.h>

#define ARRSIZE 8

int main(void)
{
	int arr[ARRSIZE] = {8,4,1,9,3,6,2,5},i,j,temp;
	for(i = 1;i < ARRSIZE;i++){//È·¶¨ÌËÊý
		for(j = 0;j < ARRSIZE - i;j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp; 
			}
		} 
		
	}
	for(i = 0;i < ARRSIZE;i++)
		printf("%d\t",arr[i]);
	printf("\n");
 } 

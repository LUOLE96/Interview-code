#include <stdio.h>
//还未调式完 
#define ARRSIZE 8

int main(void)
{
	int arr[ARRSIZE] = {8,4,1,9,3,6,2,5},i,j,temp;
	 int min;//保存最小数的下标
	 for(i = 0;i < ARRSIZE - 1;i++){//控制循环趟数 
	 	min = i;
	 	for(j = i + 1;j < ARRSIZE;j++){
	 		if(arr[j] < arr[min]){//找到更小的数 
	 			min = j;//修改当前最小数的小标为新下标 
			 }
			 
			 if(min != i){
			 	temp = arr[min];
			 	arr[min] = arr[i];
			 	arr[i] = temp;
			 } 
		 }
	 } 
	
	for(i = 0;i < ARRSIZE;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

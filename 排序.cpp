#include <stdio.h>
//��δ��ʽ�� 
#define ARRSIZE 8

int main(void)
{
	int arr[ARRSIZE] = {8,4,1,9,3,6,2,5},i,j,temp;
	 int min;//������С�����±�
	 for(i = 0;i < ARRSIZE - 1;i++){//����ѭ������ 
	 	min = i;
	 	for(j = i + 1;j < ARRSIZE;j++){
	 		if(arr[j] < arr[min]){//�ҵ���С���� 
	 			min = j;//�޸ĵ�ǰ��С����С��Ϊ���±� 
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

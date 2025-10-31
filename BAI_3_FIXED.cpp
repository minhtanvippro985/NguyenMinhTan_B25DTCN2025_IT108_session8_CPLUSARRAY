#include<stdio.h>

int main(){
	int i;
	int array[5];
	int flag = 0 ;
	for(i = 0 ; i <sizeof(array)/sizeof(int) ; i++  ){
		printf("array [%d] =", i );
		scanf("%d", &array[i]);
	} printf("so chan only aftermath\n ");
     for(i = 0 ;i < sizeof(array)/sizeof(int) ; i++){
     	if (array[i] % 2 == 0 ){
		 
     	flag = 1;
     		printf("array[%d] = %d \n", i ,array[i]);
		 }  if (flag == 0 ){
		 	printf("KHONG CO SO NAO!!!");
		 	return 0;
		 }
	 }
	return 0;
}
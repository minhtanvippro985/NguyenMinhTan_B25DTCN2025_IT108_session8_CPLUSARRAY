#include<stdio.h>


int main(){
	int arrayarranger[5];
	int i;
	for (i = 0 ; i < sizeof(arrayarranger)/sizeof(int); i++){
		printf(" \n array[%d] = ", i);
		scanf("%d",&arrayarranger[i]);
	}   printf("\n value of these array stuff");
	for (i = 0 ;i < sizeof(arrayarranger)/sizeof(int); i++  ){
		printf("array[%d] = %d \n ", i , arrayarranger[i]);
		
	}
	return 0;
	
}
#include<stdio.h>

int main(){
	int i;
	int arrayer[5];
	for(i = 0 ; i <sizeof(arrayer)/sizeof(int); i++ ){
		printf ("array[%d] =  ", i);
		scanf("%d",&arrayer[i]);
		
	}  for (i = 0 ; i <sizeof(arrayer)/sizeof(int); i++ ){
		if (arrayer[i] % 2 != 0 ){   // sole 
		
		    int newnumber = arrayer[i] + 2;
		    printf("array [%d] = %d \n", i ,newnumber );
		    
		 //   return 0;
		}   if (arrayer[i] % 2 == 0 ){ //sochan
		
		    int newnumber1 = arrayer[i] + 3;
		    printf("array [%d] = %d \n", i ,newnumber1 );
	}
}
	return 0;
}

  
  
  
  
   
   
   
   
   
   
   
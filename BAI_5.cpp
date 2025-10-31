#include<stdio.h>


/*//t main(){
//	int i;
	
	int arrayer[5];
	int max = arrayer[0]; // max = listnumber 0 , gan luon vao chi so dau tien tai cai mang do
	// check luon 
	for ( i = 0; i < sizeof(arrayer)/sizeof(int); i++ ) {
		printf("array[%d] = \n ", i );
		scanf("%d",&arrayer[i]);
		int largest(int arrayer[], int n);
	//	for (i = 1 ; i < n ; i++  )
	    //if (arrayer[i] > max );   { 
		
	         // max = arrayer[i];
			//  return 0;  
			//  }
	          
	}  printf("input after being restricted");
	
	for (i = 0 ; i < sizeof(arrayer)/sizeof(int); i++){
		//if listnumber i > max  thi cai max se thanh chinh cai listnumber do 
		// if list number i < min thi min se gan vao listnumber i do 
		
//	}
//	 
		
	
*/


    
int main() {
    int listNumber[5] = {1, 3, 1, 5, 1};
    int max = listNumber[0], min = listNumber[0];

    // bắt đầu từ 1 vì index 0 đã dùng để khởi tạo max/min
    for (int i = 1; i < 5; i++) {
        if (listNumber[i] > max) {
            max = listNumber[i];
        }
        if (listNumber[i] < min) {
            min = listNumber[i];
        }
    }

    printf("so lon nhat la %d\n", max);
    printf("so be nhat la %d\n", min);

    return 0;
}

 
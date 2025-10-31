#include <stdio.h>

int main() {
    int i;
    int arrayer[5];

     // while true = while(1)
    for (i = 0; i < sizeof(arrayer) / sizeof(int); i++) {
        while (1) { // CHI KHI NGUOI DUNG NHAP DUNG....
            printf("array[%d] = ", i);
            scanf("%d", &arrayer[i]);
            if (arrayer[i] % 2 != 0) { // SO LE!!!!
                break; // phan tu tiep theo
            } else {
                printf("So vua nhap la so chan! NHAP LAI!!!\n");
            }
        }
    }
    printf("\mang toan so le vua nhap:\n");
    for (i = 0; i < sizeof(arrayer) / sizeof(int); i++) {
        printf("array[%d] = %d\n", i, arrayer[i]);
    }

    return 0;
}

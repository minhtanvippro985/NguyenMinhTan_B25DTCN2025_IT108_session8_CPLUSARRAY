#include <stdio.h>
#include <math.h>

int thenumberimlookingfo(int swag) {
    if (swag < 2) return 0; // <2 thi khong phai
    for (int i = 2; i <= sqrt(swag); i++) { //kiemtra
        if (swag % i == 0)
            return 0; // khong phai
    }
    return 1; // la so nguyen to
}

int main() {
    int swag;
    printf("phan tu cua mang: ");
    scanf("%d", &swag);
    int arr[swag];
    for (int i = 0; i < swag; i++) {
        printf("phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n so nguyen to  ");
    int found = 0;
    for (int i = 0; i < swag; i++) {
        if (thenumberimlookingfo(arr[i])) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found)
        printf("khong j ca");
    printf("\n");
    return 0;
}

#include <stdio.h>

int main() {
    int arr1[2][3] = {{2,3,5},{1,2,9}};
    int arr2[2][3] = {{2,5,3},{5,8,5}};
    int sum[2][3];
    int i, j;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("Sum of arrays:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

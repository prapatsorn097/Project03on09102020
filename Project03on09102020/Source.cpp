#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int rows, i, j;
    printf("Enter Number Of Rows You Want: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

}
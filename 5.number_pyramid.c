#include <stdio.h>

int main() {
    int rows, number = 1, space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    space = rows - 1;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = 1; j <= space; j++) {
            printf("   ");
        }

        // Print numbers in increasing order
        for (int j = 1; j <= i; j++) {
            printf("%-3d", j);
        }

        // Print numbers in decreasing order
        for (int j = i - 1; j >= 1; j--) {
            printf("%-3d", j);
        }

        printf("\n");

        space--;
    }

    return 0;
}

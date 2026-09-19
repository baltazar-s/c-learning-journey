#include <stdio.h>

int main() {

    int s = 1;
    int z = 7;

    for (int i = 1; i <= 5; i++) {

        for (int b = 4; b >= i; b--) {
            printf(" ");
        }

        for (int x = 1; x <= s; x++) {
            printf("*");
        }

        s += 2;
        printf("\n");
    }

    for (int i = 2; i <= 5; i++) {

        for (int b = 1; b < i; b++) {
            printf(" ");
        }

        for (int y = 1; y <= z; y++) {
            printf("*");
        }

        z -= 2;
        printf("\n");
    }

    return 0;
}

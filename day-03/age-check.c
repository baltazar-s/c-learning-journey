#include <stdio.h>

int main() {
    int yas;

    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);

    if (yas >= 18) {
        printf("legal");
    } else {
        printf("illegal");
    }

    return 0;
}

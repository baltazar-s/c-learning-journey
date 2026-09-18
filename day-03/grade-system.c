#include <stdio.h>

int main() {
    int not;

    printf("Notunuzu giriniz: ");
    scanf("%d", &not);

    if (not >= 90 && not <= 100) {
        printf("Harf notunuz: A");
    }
    else if (not >= 70 && not <= 89) {
        printf("Harf notunuz: B");
    }
    else if (not >= 50 && not <= 69) {
        printf("Harf notunuz: C");
    }
    else if (not >= 0 && not <= 49) {
        printf("Harf notunuz: D");
    }
    else {
        printf("Gecersiz not girisi");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int sayi1;
    int sayi2;

    printf("Birinci sayi: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayi: ");
    scanf("%d", &sayi2);

    int toplam = sayi1 + sayi2;
    int fark = sayi1 - sayi2;
    int carpim = sayi1 * sayi2;
    int bolum = sayi1 / sayi2;
    int kalan = sayi1 % sayi2;

    printf("Toplam: %d\n", toplam);
    printf("Fark: %d\n", fark);
    printf("Carpim: %d\n", carpim);
    printf("Bolum: %d\n", bolum);
    printf("Kalan: %d\n", kalan);

    return 0;
}

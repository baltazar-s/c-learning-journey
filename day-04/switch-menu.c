#include <stdio.h>

int main() {
    int islem;
    int sayi1;
    int sayi2;

    printf("=== MENU ===\n");
    printf("1-Topla\n2-Cikar\n3-Carp\n4-Bol\n");
    printf("Islem giriniz: ");
    scanf("%d", &islem);

    printf("Ilk sayi: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayi: ");
    scanf("%d", &sayi2);

    switch (islem) {
        case 1:
            printf("Sonuc: %d", sayi1 + sayi2);
            break;

        case 2:
            printf("Sonuc: %d", sayi1 - sayi2);
            break;

        case 3:
            printf("Sonuc: %d", sayi1 * sayi2);
            break;

        case 4:
            if (sayi2 != 0)
                printf("Sonuc: %d", sayi1 / sayi2);
            else
                printf("Sifira bolunemez.");
            break;

        default:
            printf("Bilinmeyen islem.");
            break;
    }

    return 0;
}

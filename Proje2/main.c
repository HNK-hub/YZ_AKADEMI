#include <stdio.h>

int main()
{
    long sayi1, sayi2; // Binary de�erler uzun oldu�u i�in long veri tipi se�ildi
    int i = 0, kalan = 0, toplam[20]; //toplam sonucu bir diziye at�ld� her index ile i�lem yapabilmek i�in

    printf("Birinci Sayiyi Giriniz: ");
    scanf("%ld", &sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%ld", &sayi2);
    while (sayi1 != 0 || sayi2 != 0) //say�lar 0 de�ilse
    {
        toplam[i++] =(sayi1 % 10 + sayi2 % 10 + kalan) % 2; //Kalanlar� alarak bunu diziye aktard�k
        kalan =(sayi1 % 10 + sayi2 % 10 + kalan) / 2; // iki say�n�n kalanlar�n� kalana atad�k
        sayi1 = sayi1 / 10;
        sayi2 = sayi2 / 10;
    }
    if (kalan != 0)  //kalan s�f�r de�ilse say� indexsine ekle
        toplam[i++] = kalan;
    --i;
    printf("Toplam Sonucunuz : ");
    while (i >= 0)
        printf("%d", toplam[i--]);
    return 0;
}

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
void sifreleme(char *ptr) //pointer kullan�zld�
{
    while(*ptr!='\0')
    {
        *ptr =(*ptr +3); //3 kayd�rma
         ptr++;
    }
}
void sifreCoz(char *ptr)
{
   while(*ptr!='\0')
    {
        *ptr =*ptr - 3; //3 kayd�rma
         ptr++;
    }
}
int main(){
   char metin[100];
   printf("Sifrelenecek metni giriniz: ");
   gets(metin);
   sifreleme(metin);
   printf("Sifrelenmis metin: %s", metin);
   printf("\n");
   sifreCoz(metin);
   printf("Sifresi Cozulmus metin: %s", metin);
   return(0);
}

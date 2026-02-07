#include  <stdio.h>

#include  <string.h>

  /*proje:Mini Savunma Sistem Girisi*/
int main()  {
    char dogrusifre[] = "Savunma123";
    char girilensifre[20];
    int hak = 3;
    printf("---GUVENLI GIRIS SISTEMI---\n");
      while (hak>0) {
        printf("Sifre:");
        scanf("%19s" , girilenSifre); // Guvenlik icin siniri belirledik
        if(strcmp(girilenSifre,dogruSifre) == 0){
            printf("Erisim Basarili! Sisteme Giriliyor.. /n");
            return 0;
        } else {
            hak--;
            printf("Hatali! Kalan deneme: %d\n", hak);
        }
      }
      printf("Erisim Reddedildi.Sistem kilitlendi. \n");
    return 0;
}
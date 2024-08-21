#include <stdio.h>
#include <string.h>
#include "conio.h"
#include "stdlib.h"


#define maxRandevu 5
#define maxIsimUzunlugu 50

struct Randevu 
{
  char isim[maxIsimUzunlugu];
  char soyisim[maxIsimUzunlugu];
  int yil, ay, gun, saat, dakika;
};

struct Randevu randevular[maxRandevu];

int numara_randevu = 0;


 

void randevu_olusturma() {
	
  if (numara_randevu == maxRandevu) {
    printf("Hata: Daha fazla randevu olusturulamaz .\n");
    return;
  }

  printf("Isim Giriniz: ");
  scanf("%s", randevular[numara_randevu].isim);
  printf("Soyisim Giriniz: ");
  scanf("%s", randevular[numara_randevu].soyisim);
  printf("Randevu Tarihi ve Saati seciniz (GG-AA-YYYY SS:DD): ");

  scanf("%d-%d-%d %d:%d", &randevular[numara_randevu].gun, &randevular[numara_randevu].ay, &randevular[numara_randevu].yil, &randevular[numara_randevu].saat, &randevular[numara_randevu].dakika);
	
	for(int i =0 ; i<numara_randevu; i++)
	{
		if( randevular[numara_randevu].gun==randevular[i].gun  && randevular[numara_randevu].ay==randevular[i].ay && randevular[numara_randevu].yil==randevular[i].yil && randevular[numara_randevu].saat==randevular[i].saat && randevular[numara_randevu].dakika==randevular[i].dakika)
		{
			printf("Bu Tarihe Daha Once Randevu Girisi Yapildi.");
		}	
	}
	
	numara_randevu++;	
}
void randevu_ekrani() {
	printf("Alinan Randevular\n ");
  for (int i = 0; i < numara_randevu ; i++) 
  {
	printf("\n%s %s: %d-%d-%d %d:%d\n\n", randevular[i].isim, randevular[i].soyisim, randevular[i].gun, randevular[i].ay, randevular[i].yil, randevular[i].saat, randevular[i].dakika ); 
  }  
}

int main() {
  while (1) {
    printf("\nMenu:\n");
    printf("1. Randevu Olustur\n");
    printf("2. Alinan Randevulari Listele\n");
    printf("Seciminizi Giriniz: ");
	
    int secim;
    scanf("%d", &secim);
    
    if (secim == 1) {
      randevu_olusturma();
    } else if (secim == 2) {
      randevu_ekrani();
    } else {
      printf("Gecersiz Secim.\n");
    }
  }
  return 0;
}

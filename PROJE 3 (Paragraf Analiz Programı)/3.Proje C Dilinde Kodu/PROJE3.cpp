#include <stdio.h>
#include <stdlib.h>
#include <string.h>
		
int main() 
{
	printf("\t\t\t***************************FURKAN DURAN B210109048***************************\n\n\n");
	char paragraf[500];
	char seslih[]={'a','e','i','o','u'}; 
	char sessizh[]={'b','c','d','f','g','h','j','k','l','m','n','p','r','s','t','v','y','z','x','w','q'}; 
	char mail[]={'@'};
	char kelime[]={' '};
	char cumle[]={'.'};  
	int i,j,sayacSesli=0,sayacSessiz=0,sayacMail=0,sayacKelime=1,sayacCumle=0;
	
	printf("Paragrafin Icerisindeki Sesli ve Sessiz Harflerin Sayisini , Eposta Adresi Sayisini , Kelime Sayisini ve Cumle Sayisini Bulduran Program\nNOT: Her Cumle Sonuna Nokta Koyunuz ve Turkce Karakter Girisi YAPMAYINIZ\nBir Paragraf Giriniz : ");
	gets(strlwr(paragraf));
	
	
	for(i=0;i<strlen(strlwr(paragraf));i++)
	{
		for(j=0;j<strlen(seslih);j++)
		{
			if(strlwr(paragraf)[i]==seslih[j])
			{
				sayacSesli++;
			}
		}
	}
	
	for( i=0;i<strlen(strlwr(paragraf));i++)
	{
		for(j=0;j<strlen(sessizh);j++)
		{
			if(strlwr(paragraf)[i]==sessizh[j])
			{
				sayacSessiz++;
			}
		}
	}
	
		for( i=0;i<strlen(strlwr(paragraf));i++)
	{
		for(j=0;j<1;j++)
		{
			if(strlwr(paragraf)[i]==mail[j])
			{ 
				sayacMail++;
			}
		}
	}
	
		for( i=0;i<strlen(strlwr(paragraf));i++)
	{
		for(j=0;j<1;j++)
		{
			if(strlwr(paragraf)[i]==kelime[j])
			{
				sayacKelime++;
			}
		}
	}
	
		for( i=0;i<strlen(strlwr(paragraf));i++)
	{
		for(j=0;j<1;j++)
		{
			if(strlwr(paragraf)[i]==cumle[j])
			{
				sayacCumle++;
			}
		}
	}
	
	printf("Paragraftaki Sesli Harf Sayisi : %d\n",sayacSesli);
	printf("Paragraftaki Sessiz Harf Sayisi : %d\n",sayacSessiz);
	printf("Paragraftaki Eposta Adresi Sayisi : %d\n",sayacMail);
	printf("Paragraftaki Kelime Sayisi : %d\n",sayacKelime-sayacMail);
	printf("Paragraftaki Cumle Sayisi : %d\n",sayacCumle-sayacMail);
		  
}

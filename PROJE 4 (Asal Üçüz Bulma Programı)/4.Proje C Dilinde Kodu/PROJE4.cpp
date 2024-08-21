#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi , i , asal=1 ;   //(HER SAYIYI ASAL OLARAK DÜÞÜNEREK  ASAL =1 KULLANDIM.) 
	
	printf("\t\t\t\tFurkan Duran B210109048 B GRUBU\n\n");
	
	printf("Bir Sayi Giriniz :  ");
	scanf("%d",&sayi);
	
	for( i=2 ; i<sayi ; i++){
		
		if( sayi%i == 0 ){
			
			asal=0;
		}
	}
	
	if( asal == 1 &&  sayi>1 ){
		
		
			for( i=2 ; i<(sayi+2) ; i++){
		
		if( (sayi+2)%i == 0 ){
			
			asal=0;	
		}
			}
			if( asal == 1){
			
				for( i=2 ; i<(sayi+6) ; i++){
		
		if( (sayi+6)%i == 0 ){
			
			asal=0;
			
		}
				}
			if( asal == 1){
				printf("(%d,%d,%d) -----> ASAL UCUZ",sayi,sayi+2,sayi+6);
			}
		else 
		printf("(%d,%d,%d) -----> ASAL UCUZ DEGILDIR",sayi,sayi+2,sayi+6);
	
				
				
			}
		
		else 
		printf("(%d,%d,%d) -----> ASAL UCUZ DEGILDIR",sayi,sayi+2,sayi+6);
	
	}
		else 
		printf("(%d,%d,%d) -----> ASAL UCUZ DEGILDIR",sayi,sayi+2,sayi+6);
	
}

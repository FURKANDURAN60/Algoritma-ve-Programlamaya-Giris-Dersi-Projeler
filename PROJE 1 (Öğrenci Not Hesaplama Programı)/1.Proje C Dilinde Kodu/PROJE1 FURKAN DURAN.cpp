#include <stdio.h>
#include <stdlib.h>

int main() {
	
	
	
	printf("\t\t\tFurkan Duran B210109048  B Grubu Proje Odevi 1.Proje\n\n\n");
	
	int i,n;
	float vize,p1,p2,donemodev,final,ort1,ort2,ortson;
	
	printf("Ogrenci Sayisini Giriniz : ");
	scanf("%d",&n);
	
	for( i=1 ; i<=n ; i++ )
	{
		printf("%d. Ogrencinin Vize Notunu Giriniz :  ",i);
		scanf("%f",&vize);	
		
		printf("%d. Ogrencinin 1.Proje Notunu Giriniz :  ",i);
		scanf("%f",&p1);
		
		printf("%d. Ogrencinin 2.Proje Notunu Giriniz :  ",i);
		scanf("%f",&p2);
		
		printf("%d. Ogrencinin Donem Odevi Notunu Giriniz :  ",i);
		scanf("%f",&donemodev);
		
		printf("%d. Ogrencinin Final Notunu Giriniz :  ",i);
		scanf("%f",&final);
		
		
		ort1=(vize*0.45)+(p1*0.2)+(p2*0.2)+(donemodev*0.15);
		ort2=final;
		ortson=ort1*0.45+ort2*0.55;
		
		if(ortson>=90.00 && ortson<=100.00)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> AA\n\n\n",i);
		}
		else if(ortson>=85.00 && ortson<=89.99)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> BA\n\n\n",i);
		}
		else if(ortson>=80.00 && ortson<=84.99)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> BB\n\n\n",i);
		}
		else if(ortson>=75.00 && ortson<=79.99)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> CB\n\n\n",i);
		}
		else if(ortson>=65.00 && ortson<=74.99)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> CC\n\n\n",i);
		}
		else if(ortson>=58.00 && ortson<=64.99)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> DC\n\n\n",i);
		}
		else if(ortson>=50.00 && ortson<=57.99)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> DD\n\n\n",i);
		}
		else if(ortson>=40.00 && ortson<=49.99)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> FD\n\n\n",i);
		}
		else if(ortson>=0.00 && ortson<=39.99)
		{
			printf("%d. Ogrencinin Basari Notu ---> %f\n",i,ortson);
			printf("%d. Ogrencinin Can Egrisine Gore Basari Notu ---> FF\n\n\n",i);
		}
		else 
		printf("****LUTFEN 0-100 ARASI NOT GIRISI YAPINIZ****\n\n\n\n");
				
	}
	
	
}

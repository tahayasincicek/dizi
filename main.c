#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int enkucuk(int dizi[], int esayisi){
	
	int k,
	
	int gecicidegisken = dizi[0];  /*1*/
	
	for(k=1;k<esayisi;k++){      /*2*/
		
		if(gecicidegisken>dizi[k]){     /*3*/  
			
			gecicidegisken=dizi[k];     /*4*/  
		}
	}
	return gecicidegisken;             /*5*/
}


/*

   *1* 1 i�lem           1.sat�rda 1 i�lem yap�lm��t�
   *2* 1+(n+1)+n i�lem   2.sat�r d�ng� oldu�u i�in ortadaki i�lem n+1 kadar tekrar eder.1.i�lem sadece de�er atama i�lemi oldu�u i�in 1 kere tekrar eder. 
				    3.i�lem ise sonuncu d�ng� s�ras� n oldu�u i�in n kere tekrar eder
				    
   *3* 1 i�lem          3.sat�rda 1 i�lem yap�lm��t�r
   *4* 1 i�lem          4.sat�rda 1 i�lem yap�lm��t�r    
   *5* 1 i�lem          5.sat�rda 1 i�lem yap�lm��t�r
   T(n) = 2n+5     B�t�n sonu�lar topland���nda 2n+6 cevab� ��kar.
   
   */   


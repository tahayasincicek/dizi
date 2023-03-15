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

   *1* 1 iþlem           1.satýrda 1 iþlem yapýlmýþtý
   *2* 1+(n+1)+n iþlem   2.satýr döngü olduðu için ortadaki iþlem n+1 kadar tekrar eder.1.iþlem sadece deðer atama iþlemi olduðu için 1 kere tekrar eder. 
				    3.iþlem ise sonuncu döngü sýrasý n olduðu için n kere tekrar eder
				    
   *3* 1 iþlem          3.satýrda 1 iþlem yapýlmýþtýr
   *4* 1 iþlem          4.satýrda 1 iþlem yapýlmýþtýr    
   *5* 1 iþlem          5.satýrda 1 iþlem yapýlmýþtýr
   T(n) = 2n+5     Bütün sonuçlar toplandýðýnda 2n+6 cevabý çýkar.
   
   */   


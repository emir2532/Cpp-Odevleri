/*
En az 10 elamanlý bir dizi oluþturulacaktýr.
Dizinin elemanlarý rastgele üretilen sayýlardan oluþacaktýr.
Dizideki tüm elemanlarýn faktöriyel deðeri hesaplanacaktýr.				
*/

//Hazýrlayan : Emir Oruç (230610045)
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 

/*
int a;
srand(time(NULL));
a=rand()%100+1;
(bilgisayardan zamana baðlý random sayý alabilmek için)
*/    
			
main (){
	
    srand(time(NULL));
	int dizi[10]={rand()%20+1,rand()%20+1,rand()%20+1,rand()%20+1,rand()%20+1,
	rand()%20+1,rand()%20+1,rand()%20+1,rand()%20+1,rand()%20+1};
	/*10 terimli bir diziyi her elemaný random olacak þekilde tanýmladým.*/

	int i,j,terim;
	cout<<"Dizinin Elemanlari\t\t\t"<<"Faktoriyel Sonuclari"<<endl;
	cout<<"------------------\t\t\t"<<"--------------------"<<endl;
	/*Dizi Elemanlarýnýn ve Faktoriyel Sonuçlarýnýn baþlýklarýný yazdýrdým.*/
	
    for(i=0; i<=9; i++){
	terim=i+1;
	/*for döngüsü ile bir i deðiþkeni tanýmladým bu deðiþken
	dizideki elemanlarý sýrasýyla seçebilmem için gerekliydi.
	Sonrasýnda ise ekrana yazdýrýrken dizinin index deðeri 0'dan baþladýðý için
	terim=i+1 iþlemi tanýmladým ve dizinin kaçýncý terimi olduðunu en son ekrana yazdýrdým.
	*/
        unsigned long long int faktor=1;
    /*unsigned long long int deðiþkenini büyük sonuçlu faktöriyel
	hesaplamalarýnýn doðru yazýlmasý için kullandým. 
	*/ 
        for (j=1; j<=dizi[i]; j++){
        faktor=faktor*j;
        }
    /*Dizideki elemanlarýn sýrasýyla faktöriyel deðerini hesaplamak
	için döngü kullandým. 'faktor=faktor*k' iþlemini döngüye alarak
	faktöriyellerini hesaplattým.
	*/    
        cout<<terim<<". Terim = "<<dizi[i]<<"\t\t\t\t";
        cout<<dizi[i]<<"! = "<<faktor<<endl;
    /*Dizinin random seçilmiþ elemanlarýný ve
	faktöriyellerinin sonuçlarýný ekrana yazdýrdým.
	*/    
	    }
    return 0;
}


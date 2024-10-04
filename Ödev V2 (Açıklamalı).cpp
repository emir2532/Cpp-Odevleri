/*
En az 10 elamanl� bir dizi olu�turulacakt�r.
Dizinin elemanlar� rastgele �retilen say�lardan olu�acakt�r.
Dizideki t�m elemanlar�n fakt�riyel de�eri hesaplanacakt�r.				
*/

//Haz�rlayan : Emir Oru� (230610045)
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std; 

/*
int a;
srand(time(NULL));
a=rand()%100+1;
(bilgisayardan zamana ba�l� random say� alabilmek i�in)
*/    
			
main (){
	
    srand(time(NULL));
	int dizi[10]={rand()%20+1,rand()%20+1,rand()%20+1,rand()%20+1,rand()%20+1,
	rand()%20+1,rand()%20+1,rand()%20+1,rand()%20+1,rand()%20+1};
	/*10 terimli bir diziyi her eleman� random olacak �ekilde tan�mlad�m.*/

	int i,j,terim;
	cout<<"Dizinin Elemanlari\t\t\t"<<"Faktoriyel Sonuclari"<<endl;
	cout<<"------------------\t\t\t"<<"--------------------"<<endl;
	/*Dizi Elemanlar�n�n ve Faktoriyel Sonu�lar�n�n ba�l�klar�n� yazd�rd�m.*/
	
    for(i=0; i<=9; i++){
	terim=i+1;
	/*for d�ng�s� ile bir i de�i�keni tan�mlad�m bu de�i�ken
	dizideki elemanlar� s�ras�yla se�ebilmem i�in gerekliydi.
	Sonras�nda ise ekrana yazd�r�rken dizinin index de�eri 0'dan ba�lad��� i�in
	terim=i+1 i�lemi tan�mlad�m ve dizinin ka��nc� terimi oldu�unu en son ekrana yazd�rd�m.
	*/
        unsigned long long int faktor=1;
    /*unsigned long long int de�i�kenini b�y�k sonu�lu fakt�riyel
	hesaplamalar�n�n do�ru yaz�lmas� i�in kulland�m. 
	*/ 
        for (j=1; j<=dizi[i]; j++){
        faktor=faktor*j;
        }
    /*Dizideki elemanlar�n s�ras�yla fakt�riyel de�erini hesaplamak
	i�in d�ng� kulland�m. 'faktor=faktor*k' i�lemini d�ng�ye alarak
	fakt�riyellerini hesaplatt�m.
	*/    
        cout<<terim<<". Terim = "<<dizi[i]<<"\t\t\t\t";
        cout<<dizi[i]<<"! = "<<faktor<<endl;
    /*Dizinin random se�ilmi� elemanlar�n� ve
	fakt�riyellerinin sonu�lar�n� ekrana yazd�rd�m.
	*/    
	    }
    return 0;
}


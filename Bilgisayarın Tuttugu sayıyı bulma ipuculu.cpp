//Hazýrlayan: Emir Oruç (230610045)
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
main() {
	int a;
	srand(time(NULL));
    a=rand()%100+1;
    cout<<a<<endl; //Gerçek oyunda silinecek satýr
    
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    cout<<"Bilgisayar 1 ile 100 arasinda (1 ile 100 dahil) bir sayi tuttu :) \n\nSayiyi Tahmin Ediniz"<<endl;
    
cout<<"1.Tahmin:"<<endl;
    cin>>a1;
    if (a==a1)
    {
	cout<<"1. Tahminde Dogru Buldun \n***Akil Okuyucu***"<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else {
	cout<<"Yanlis Tahmin";
	}
	
cout<<"\n\n2.Tahmin:"<<endl;
    cin>>a2;
    if (a==a2)
    {
	cout<<"2. Tahminde Dogru Buldun \n***Akil Okuyucu***"<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else if (a%2==0) 
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Bilgisayarin tuttugu bir cift sayi"<<endl;
	}
	else if (a%2==1)
	{
	cout<<"Yanlis Tahmin"<<endl;
	cout<<"\nIPUCU: Bilgisayarin tuttugu bir tek sayi"<<endl;
	}
	
cout<<"\n\n3.Tahmin:"<<endl;
    cin>>a3;
    if (a==a3)
    {
	cout<<"3. Tahminde Dogru Buldun \n***Akil Okuyucu***"<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else if (a<=50) 
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Bilgisayarin tuttugu sayi 50'den kucuk veya esit"<<" ("<<"?"<<"<="<<"50"<<")"<<endl;
	}
	else if (a>50)
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Bilgisayarin tuttugu sayi 50'den buyuk"<<" ("<<"?"<<">"<<"50"<<")"<<endl;
	}
	
cout<<"\n\n4.Tahmin:"<<endl;
    cin>>a4;
	if (a==a4)
    {
	cout<<"4. Tahminde Dogru Buldun \n***Ortalama Zeka***"<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else if ((a!=a4) && (a<a4)) 
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Tahmin Ettigin Sayi, Bilgisayarin tuttugu sayidan buyuk"<<" ("<<a4<<">"<<"?"<<")"<<endl;
	}
	else if ((a!=a4) && (a>a4))
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Tahmin Ettigin Sayi, Bilgisayarin tuttugu sayidan kucuk"<<" ("<<a4<<"<"<<"?"<<")"<<endl;
	}
    
cout<<"\n\n5.Tahmin:"<<endl;
    cin>>a5;
	if (a==a5)
    {
	cout<<"5. Tahminde Dogru Buldun \n***Ortalama Zeka***"<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else if (a%3==0) 
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Bilgisayarin tuttugu sayi 3'e Tam Bolunuyor"<<endl;
	}
	else if (a%3!=0)
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Bilgisayarin tuttugu sayi 3'e Tam Bolunemiyor"<<endl;
	}
	
cout<<"\n\n6.Tahmin:"<<endl;
    cin>>a6;
	if (a==a6)
    {
	cout<<"6. Tahminde Dogru Buldun \n***Ortalama Zeka***"<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else if (a%5==0) 
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Bilgisayarin tuttugu sayi 5'e Tam Bolunuyor"<<endl;
	}
	else if (a%5!=0)
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Bilgisayarin tuttugu sayi 5'e Tam Bolunemiyor"<<endl;
	}
	
cout<<"\n\n7.Tahmin:"<<endl;
    cin>>a7;
    if (a==a7)
    {
	cout<<"7. Tahminde Dogru Buldun \n***Ortalama Zeka***"<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else if ((a!=a7) && (a<a7)) 
	{
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nIPUCU: Tahmin Ettigin Sayi, Bilgisayarin tuttugu sayidan buyuk"<<" ("<<a7<<">"<<"?"<<")"<<endl;
	}
	else if ((a!=a7) && (a>a7))
	{
	cout<<"Yanlis Tahmin!\n(Son 3 Tahmin Hakkin Kaldi)"<<endl;
	cout<<"\nIPUCU: Tahmin Ettigin Sayi, Bilgisayarin tuttugu sayidan kucuk"<<" ("<<a7<<"<"<<"?"<<")"<<endl;
	}
	
cout<<"\n\n8.Tahmin:"<<endl;
    cin>>a8;
	if (a==a8)
    {
	cout<<"8. Tahminde Dogru Buldun \n***Kendini Gelistirmen Gerekli***"<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else {
	cout<<"Yanlis Tahmin!\n(Son 2 Tahmin Hakkin Kaldi)";
    }
    
cout<<"\n\n9.Tahmin:"<<endl;
    cin>>a9;
	if (a==a9)
    {
    cout<<"9. Tahminde Dogru Buldun \n***Kendini Gelistirmen Gerekli*** "<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else {
	cout<<"Yanlis Tahmin!\n(Son 1 Tahmin Hakkin Kaldi)";
    }
	
	
cout<<"\n\n10.Tahmin:"<<endl;
    cin>>a10;
	if (a==a10)
    {
    cout<<"10. Tahminde Dogru Buldun \n***Kendini Gelistirmen Gerekli*** "<<endl;
	cout<<"\nTebrikler! Oyun Bitti"<<endl;
	system ("pause");
	return 0;
	}
	else {
	cout<<"Yanlis Tahmin!"<<endl;
	cout<<"\nHicbir Tahmininde Bulamadin :( Oyun Bitti."<<endl;
	}
	system ("pause");
	return 0;
}

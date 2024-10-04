#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

main() {
cout<< "Ax^2+Bx+C=D\n***SEKLINDEKI IKINCI DERECEDEN BIR DENKLEMIN KOKLERINI BULMA UYGULAMASI***\n"<<endl;
double a,b,c,d;
double dis,dis2,byk1,byk2,est,kck1,kck11,kck2,kck22,kck3;
cout<<"\nA degerini giriniz: "<<endl;
cin>>a;
cout<<a<<"x^2+Bx+C=D"<<endl;
cout<<"\nB degerini giriniz: "<<endl;
cin>>b;
cout<<a<<"x^2+"<<b<<"x+C=D"<<endl;
cout<<"\nC degerini giriniz: "<<endl;
cin>>c;
cout<<a<<"x^2+"<<b<<"x+"<<c<<"=D"<<endl;
cout<<"\nD degerini giriniz: "<<endl;
cin>>d;
cout<<"\nDenklemimiz:"<<a<<"x^2+"<<b<<"x+"<<c<<"="<<d<<endl;

dis=sqrt((b*b)-(4*a*c));
dis2=sqrt(-1*((b*b)-(4*a*c)));

if(dis>0)
	{
	cout<<"\n\nIki Reel Kok Vardir!\nBu Kokler:\n"<<endl;
	byk1=(-(b)+dis)/(2*a);
	byk2=(-(b)-dis)/(2*a);
	cout<<"\nBirinci Kok="<<byk1<<endl;
	cout<<"\nIkinci Kok="<<byk2<<endl;
	}
	if(dis==0)
	{
	est=((-(b))/(a));
	cout<<"\n\nKok="<<est<<endl;
	}
	if(dis2>0)
	{
    cout<<"\n\nReel kok yoktur!\nImajiner Kokler vardir. \nBu Kokler:"<<endl;

    kck1=(-(b));
    kck11=(2*a);
    kck2=(-(b));
    kck22=(2*a);
	cout<<"\n\nKok1="<<"("<<kck1<<")"<<"-"<<"("<<dis2<<")"<<"i/"<<"("<<kck11<<")"<<endl;
	cout<<"\n\nKok2="<<"("<<kck2<<")"<<"+"<<"("<<dis2<<")"<<"i/"<<"("<<kck22<<")"<<endl;
	cout<<"\n\nHazirlayan: Emir Oruc";
    }
		
	return 0;
}

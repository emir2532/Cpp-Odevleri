//Hazırlayan : Emir Oruç (230610045)
#include <iostream>
#include <string>
using namespace std;

    void dairesekil(){
    cout << "   ***   \n";
    cout << " *     * \n";
    cout << "*       * => Daire\n";
    cout << "*       *\n";
    cout << " *     * \n";
    cout << "   ***   \n\n";
    }
    void karesekil(){
    cout << "* * * * *\n";
	cout << "*       *\n";
	cout << "*       * => Kare\n";
	cout << "*       *\n";
	cout << "* * * * *\n\n";
	}
	void dikdortgensekil(){
	cout << "* * * * *\n";
	cout << "*       *\n";
	cout << "*       * => Dikdortgen\n";
	cout << "* * * * *\n\n"<<endl;
	}
    void ucgensekil(){
    cout << "    *\n";
	cout << "   * *\n";
	cout << "  *   *   => Ucgen\n";
	cout << " *     *\n";
	cout << "* * * * *\n\n";
    }
    
	const double pi = 3.1415; //Değiştirilemez ve sadece okunur değişken olarak pi tanımlama
    double daire(double yaricap){
	    if (yaricap < 0){
	    	cout<<"Yaricap degeri 0'dan kucuk olamaz"<<endl;
	    	return 0;
		}
		else{
		double daire_alan = (pi)*(yaricap*yaricap);
	    return daire_alan;
	    }
    }
    double kare(double kenar_uzunluk){
	    if (kenar_uzunluk < 0){
	    	cout<<"Kenar uzunlugunun degeri 0'dan kucuk olamaz"<<endl;
	    	return 0;
		}
		else{
		double kare_alan = (kenar_uzunluk*kenar_uzunluk);
	    return kare_alan;
	    }
    }
    double dikdortgen (double uzun_kenar, double kisa_kenar){
    	if (uzun_kenar < 0 || kisa_kenar < 0){
	    	cout<<"Kenar uzunlugunun degeri 0'dan kucuk olamaz"<<endl;
	    	return 0;
	    }
	    else if (kisa_kenar > uzun_kenar ){
	    	cout<<"Uzun kenar kısa kenardan kucuk olamaz"<<endl;
	    	return 0;
		}	
	    else{
		double dikdortgen_alan = (uzun_kenar*kisa_kenar);
	    return dikdortgen_alan;
	    }
    }
    double ucgen (double taban_uzunluk, double yukseklik_uzunluk){
    	if (taban_uzunluk < 0 || yukseklik_uzunluk < 0){
	    	cout<<"Uzunluk degerleri 0'dan kucuk olamaz"<<endl;
	    	return 0;
	    }
	    else{
	    double ucgen_alan = (taban_uzunluk*yukseklik_uzunluk)/2;
        return ucgen_alan;
        }
	}

int main(){
	cout<<"Girilen Geometrik Cismin Alanini Hesaplama Uygulamasi\n"<<endl;
	dairesekil(),ucgensekil(),karesekil(),dikdortgensekil();
    
	double a,b;
	string geo;

	cout << "Alanini hesaplamak istediginiz geometrik cismi yaziniz:"<<endl;
	cin >> geo;
	
	if(geo == "daire" || geo == "Daire"){
		dairesekil();
		cout << "Dairenin yaricapinin uzunlugunu giriniz: ";
		cin >> a;
		cout << "\nDairenin yaricapi: " <<a <<endl;
		cout << "DAIRENIN ALANI: " <<daire(a) <<endl << endl;
	}
	else if (geo == "kare" || geo == "Kare"){
		karesekil();
		cout << "Karenin bir kenarinin uzunlugunu giriniz: ";
		cin >> a;
		cout << "\nKarenin bir kenar uzunlugu: " << a << endl;
		cout << "KARENIN ALANI: " << kare(a) << endl;
	}
	else if (geo == "dikdortgen" || geo == "Dikdortgen"){
		dikdortgensekil();
		cout << "Dikdortgenin uzun kenarinin uzunlugunu giriniz: ";
		cin >> a;
		cout << "Dikdortgenin kisa kenarinin uzunlugunu giriniz: ";
		cin >> b;
		cout << "\nDikdortgenin uzun kenarinin uzunlugu: "<<a<<endl;
		cout << "Dikdortgenin kisa kenarinin uzunlugu: " << b << endl;
		cout << "DIKDORTGENIN ALANI: " << dikdortgen(a,b) << endl;
	}
	else if (geo == "ucgen" || geo == "Ucgen"){
		ucgensekil();
		cout<<"Ucgenin taban uzunlugunu giriniz: ";
		cin>>a;
		cout<<"Ucgenin yuksekliginin uzunlugunu giriniz: ";
		cin>>b;
		cout<<"\nUcgenin taban uzunlugu: "<<a<<endl;
		cout<<"Ucgenin yuksekliginin uzunlugu: "<<b<<endl;
		cout<<"UCGENIN ALANI: "<<ucgen(a,b)<<endl;
    }
    else {
    	cout << "Yazdiginiz Geometrik Cisim Programda Tanimsizdir." << endl;
	}
	
	system ("pause");
	return main();
}

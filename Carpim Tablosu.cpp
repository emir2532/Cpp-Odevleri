#include <iostream>
using namespace std;

int main(){
	cout<<"\t\t\t\tCarpim Tablosu"<<endl<<"\t\t\t\t--------------"<<endl<<endl;
	int dizi1[9],dizi2[9],carpim,j;
	for(int i=0; i<=9; i++){
    dizi1[i]=i;
       for(j=0; j<=9; j++){
	   dizi2[j]=j;
	   cout<<dizi1[i]<<"x"<<dizi2[j]<<"="<<dizi1[i]*dizi2[j]<<"\t ";
	   }
	cout<<endl;
	}
	system("pause");
	return 0;
}

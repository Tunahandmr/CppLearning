using namespace std;
#include <iostream>

int main()
{
	int bakiye = 1000;
	cout << "Z bankasina hos geldiniz.." << endl;
	cout << "Lutfen kartinizi takiniz.." << endl;
	cout << "Kartiniza ait sifreyi giriniz:";
	string sifre;
	cin >> sifre;
	if (sifre == "abcde") {
		cout << "Tesekkurler" << endl;
		cout << "islemler Listesi:"<<endl;
		cout << "a - Para cekme"<<endl;
		cout << "b - Bakiye goruntuleme"<<endl;
		cout << "Yapmak istediginiz islemi seciniz:";
		string islem;
		cin >> islem;
		if (islem == "a") {
			cout << "Cekmek istediginiz miktari giriniz:";
			int tutar;
			cin >> tutar;
			bakiye = bakiye - tutar;
			cout << "Kalan bakiye: " << bakiye<<endl;
			cout << "Paranizi aliniz!" << endl << "Kartinizi almayi unutmayiniz!";


		}
		else if (islem == "b") {
			cout << "Kalan bakiye: " << bakiye<<endl;
			cout << "Kartinizi almayi unutmayiniz!";
		}

	}
	else {
		cout << "Yanlis sifre.."<<endl;
		cout << "Kartinizi almayi unutmayiniz!";
	}


}


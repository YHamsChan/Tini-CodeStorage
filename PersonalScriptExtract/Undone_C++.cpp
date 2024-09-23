#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
bool Used = false;

int main() {
	int Code = 1;
	float Alas, Tinggi, luas, keliling;
	float Celsius, Fahrenheit, Reamur;
	float SisiMiring;
	int Bilangan_GanjilGenap;
	if (Used == false) {
		cout << "[FICTION CYBER'S CREATION]\n";
		cout << "====      TUGAS      ====\n";
		cout << "--------------------------\n";
		cout << "Silahkan isi data di bawah!\n";
		Used = true;
	}
	else {
		cout << "---------------------------\n";
		cout << "Silahkan isi data di lagi!\n";
	};
	
	if (Code == 1) {
		cout << "Masukkan Tinggi: ";
		cin >> Tinggi;
		cout << "Masukkan Alas: ";
		cin >> Alas;
		Luas = 0.5 * Alas * Tinggi;
    	Keliling = Alas + tinggi + (sqrt(pow(Alas, 2) + pow(Tinggi, 2)));
	};
	if (Code == 2) {
		
	};
	if (Code == 3) {
		cout << "Masukkan Tinggi: ";
		cin >> Tinggi;
		cout << "Masukkan Alas: ";
		cin >> Alas;
    	SisiMiring = sqrt(pow(Alas, 2) + pow(Tinggi, 2));
    	cout << "Sisi Miring: " << Alas << "^2 x " << Tinggi << "^2 = " << SisiMiring << "\n";
	}
	if (Code == 4) {
		if (Bilangan_GanjilGenap < 0) {
        cout << "Masukkan Bilangan: ";
        cin >> Bilangan_GanjilGenap
    	} else {
        if (Bilangan_GanjilGenap % 2 == 0) {
            printf("[Bilangan Genap!]\n");
        } else {
            printf("[Bilangan Ganjil!]\n");
        	}
    	}
	}
	main();
}

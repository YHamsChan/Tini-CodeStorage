//SYSTEM: MENGEPRINT NIM, NAMA, JURUSAN
#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

string ListNama[] = {"Nayomi Bataritoja Laksmono", "Cesya Magdalena Pardede", "Ghaitsaa Kahla"};
string ListNIM[] = {"293049", "128390", "093945"};
string ListClass[] = {"PPLG", "PPLG", "DKV"};
int Length = sizeof(ListNama) / sizeof(ListNama[0]); //Get array total

int main() {
	cout << "[WELCOME TO FICTION CYBER'S CREATION]\n";
	cout << "=====================================\n";
	cout << "List Data:\n";
	for (int i = 0; i< Length; i=i+1) {
		cout << "----------------------------------\n";
		cout << "Nama: " << ListNama[i] << ".\n";
		cout << "NIM: " << ListNIM[i] << "\n";
		cout << "Jurusan: " << ListClass[i] << "\n";
	}
}

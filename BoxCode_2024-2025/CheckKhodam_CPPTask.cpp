#include <iostream>
#include <string>
#include <stdio.h>
#include<cstdlib>
#include <cstdlib>
#include <ctime>
#include <unistd.h> // atau [or] <windows.h>
bool Repeated = false;
using namespace std;
string Common[] = {"Kecoak Emas", "Kulkas Terbang", "Beruang Jawa", "Batu Bata", "Kompor Menyala", "Jemuran Penuh",
	"Panci Gosong", "Kaos Bolong", "Korek Macet", "Payung Kertas", "Kosong"};
	
string Rare[] = {"Buaya Albino", "Kuntilanak Selfie", "Gondoruwo Toktok", "Jin Penjual Cilok", "Tuyul Part-Time", 
	"Kodok Albino"};
	
string Legendary[] = {"Kuntilanak Ngopi", "Naga Emas", "Pocong Joget"};

int Recall() {
	string Name = "Default";
	if (Repeated == false) {
		Repeated = true;
		cout << "\n===[Selamat datang di program check Khodam!]===\n";
	}
	else {
		cout << "\n===[Silakan coba lagi!]===\n";
	}
	cout << "Masukkan Nama Anda: ";
	cin >> Name;
	std::srand(static_cast<unsigned int>(std::time(0))); //created random number, dont put it in the function of for or etc.
	
	int NameLength = Name.length();
    if (NameLength == 0) {
        cout << "Nama tidak boleh kosong!" << "\n";
        Recall();
    }

    int RandomIndex = std::rand() % NameLength;
    char RandomChar = Name[RandomIndex];
    int CharToNumber;
    RandomChar = std::tolower(RandomChar); // Ubah jadi huruf kecil
    if (RandomChar >= 'a' && RandomChar <= 'z') {
        CharToNumber = RandomChar -'a'+1; //membuat huruf menjadi angka a + 1 biar gak ngebug
        
    } else {
        cout << "Karakter acak bukan huruf!" << "\n";
        Recall();
    }
    
	int TrueRandomer = 1 + rand() % RandomChar; //minimum, randomizer, max number
	int LuckScope = 1+ rand() % RandomChar;
	int LuckScopePlus = 1+ rand() %RandomChar; //TRIGGERED IF THREE OF THIS ARE EQUAL
	string Class = "Common";
	
	if (TrueRandomer == LuckScope) {
		if (LuckScope == LuckScopePlus) {
			Class = "Legendary";
		}
		else {
			Class = "Rare";
		};
	}
	else{
		Class = "Common";
	};
	cout << "Khodam anda adalah....\n";
	sleep(1);
	if (Class == "Common") {
		int ArraySize = sizeof(Common) / sizeof(Common[0]);
		int RandomTablePicker = rand() % ArraySize;
		cout << "[Umum]" << Common[RandomTablePicker] << "!\n";	
	}
	if (Class == "Rare") {
		int ArraySize = sizeof(Rare) / sizeof(Rare[0]);
		int RandomTablePicker = rand() % ArraySize;
		cout << "[Langka] " << Rare[RandomTablePicker] << "!\n";	
	}
	
	if (Class == "Legendary") {
		int ArraySize = sizeof(Legendary) / sizeof(Legendary[0]);
		int RandomTablePicker = rand() % ArraySize;
		cout << "[Legendaris] " << Legendary[RandomTablePicker] << "!?\n";	
		
	}
	sleep(1);
	Recall();
}

int main(){
	cout << "[Welcome to FICTION CYBER'S CREATION]\n";
	cout << "[Created By: Fiction Cyber]\n";
	cout << "[V.0.1]\n";
	cout << "===================================\n";
	Recall();
}

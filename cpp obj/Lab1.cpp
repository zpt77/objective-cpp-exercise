/*#include <iostream>
#include <string>

using namespace std;

class Zamowienie {

private:
	std::string nazwa_produktu;
	double cena_produktu;
	std::string data_zakupu;
	int liczba_sztuk;


public:
	void zapisz_dane() {
		cout << "Podaj nazwe produktu: ";
		cin >> nazwa_produktu;
		cout << "Podaj cene produktu: ";
		cin >> cena_produktu;
		cout << "Podaj date zakupu: ";
		cin >> data_zakupu;
		cout << "Podaj liczbe sztuk: ";
		cin >> liczba_sztuk;
		
	}

	void wyswietl_dane() {
		cout << "Nazwa produktu: " << nazwa_produktu
			<< ", Cena produktu: " << cena_produktu
			<< ", Data zakupu: " << data_zakupu
			<< ", Liczba sztuk: " << liczba_sztuk << endl;
	}

	string podaj_nazwe_produktu() {
		return nazwa_produktu;
	}

	double podaj_cene() {
		return cena_produktu;
	}

	string podaj_date_zakupu() {
		return data_zakupu;
	}

	int podaj_liczbe_sztuk() {
		return liczba_sztuk;
	}

	double podaj_koszt() {
		return liczba_sztuk * cena_produktu;
	}
};

int main() {

	Zamowienie z1;
	Zamowienie* wsk = &z1;
	Zamowienie z2;
	Zamowienie* wsk2 = &z2;
	
	cout << "Produkt 1:" << endl;
	wsk->zapisz_dane();
	cout << "Produkt 2:" << endl;
	wsk2->zapisz_dane();
	wsk->wyswietl_dane();
	wsk2->wyswietl_dane();
	cout <<"Koszt zamowienia 1: " << z1.podaj_koszt() << endl;
	cout << "Koszt zamowienia 2: " << z2.podaj_koszt() << endl;
}
*/
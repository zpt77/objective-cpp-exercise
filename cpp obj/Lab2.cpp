/*#include <iostream>
#include <string>

using namespace std;

class Auto {
	
private:
	string producent;
	string kolor;
	double pojemnosc_silnika;

public:
	Auto() {
		producent = "-";
		kolor = "-";
		pojemnosc_silnika = 0;
	}

	Auto(string producent, string kolor, double pojemnosc_silnika) {
		this->producent = producent;
		this->kolor = kolor;
		this->pojemnosc_silnika = pojemnosc_silnika;
}
	string podaj_producenta() {
		return producent;
	}

	string podaj_kolor() {
		return kolor;
	}

	double podaj_pojemnosc() {
		return pojemnosc_silnika;
	}

	void wyswietl_dane() {
		cout << "\nProducent: " << podaj_producenta() << endl
			<< "Kolor: " << podaj_kolor() << endl
			<< "Pojemnosc silnika: " << podaj_pojemnosc() << endl;
	}
};

void wyszukiwanie(Auto* tab, string kolor) {
	
	for (int i = 0; i < 5; i++) {
		
		if (tab[i].podaj_kolor() == kolor)
		{
			tab[i].wyswietl_dane();	
		}
	}
}

int main() {

	Auto tab1[5] = {{"Mercedes", "czarny", 3.0}, {"BMW", "bialy", 2.9}, {"Ford", "czerwony", 2.4},
	{"Jeep", "zielony", 1.9 }, {"Toyota", "niebieski", 2.1}};

	Auto* tab2 = new Auto[5];
	tab2[0] = {"Skoda", "zielony", 1.9 };
	tab2[1] = {"Seat", "niebieski", 2.4};
	tab2[2] = {"Mazda", "czerwony", 2.6};
	tab2[3] = {"Audi", "czarny", 2.9};
	tab2[4] = {"Volkswagen", "zolty", 1.6};

	wyszukiwanie(tab1, "czerwony");
	wyszukiwanie(tab2, "czerwony");
}*/
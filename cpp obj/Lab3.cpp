/*#include <iostream>
#include <string>

using namespace std;


class Silnik {

private:
	int pojemnosc;
	string producent;

public:
	Silnik(int pojemnosc, string producent) {
		this->pojemnosc = pojemnosc;
		this->producent = producent;
	}
	
	int podaj_pojemnosc() {
		return pojemnosc;
	}

	string podaj_producenta() {
		return producent;
	}
};


class Urzadzenie {

private:
	const string producent;
	int obroty;
	Silnik* silnik;

public:
	Urzadzenie(int obroty, Silnik* silnik, string producent) : producent(producent) {
		this->obroty = obroty;
		this->silnik = silnik;
	}

	string podaj_producenta() {
		return producent;
	}

	int podaj_obroty() {
		return obroty;
	}

	Silnik podaj_silnik() {
		return *silnik;
	}



	int podaj_pojemnosc_silnika(Silnik silnik) {
		return silnik.podaj_pojemnosc();
	}

	string podaj_producenta_silnika(Silnik silnik) {
		return silnik.podaj_producenta();	
	}

	void wyswietl_dane() {
		cout << "\nProducent urzadzenia: " << podaj_producenta() << "\nObroty: " << podaj_obroty()
			<< "\nProducent silnika: " << podaj_producenta_silnika(*silnik) << "\nPojemnosc silnika: " << podaj_pojemnosc_silnika(*silnik) << endl;
	}
};

Urzadzenie wyszukiwanie(Urzadzenie tab[], int n) {
	int k;
	for (int i = 0; i < n; i++) {
		if (tab[i].podaj_producenta() == tab[i].podaj_producenta_silnika(tab[i].podaj_silnik())) {
			k = i;
			tab[i].wyswietl_dane();
		}
	}
	return tab[k];
}

	

int main() {

	Silnik s1(5, "SpaceX");
	Silnik s2(2, "Toshiba");
	Silnik s3(3, "Nokia");
	Silnik* sa = &s1;
	Silnik* sb = &s2;
	Silnik* sc = &s3;
	const int n = 6;

	Urzadzenie tab[n] = { {1, sa, "SpaceX"}, { 2,sc, "Nokia" },
						{ 1,sc, "Siemens" }, { 2,sb, "Toshiba" },
						{ 1,sa,"Bosh" }, { 2,sc,"Electrolux" } };

	wyszukiwanie(tab, n);

}*/

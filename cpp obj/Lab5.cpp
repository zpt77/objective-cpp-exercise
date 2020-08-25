/*#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class Sprzet {
private:
	int identyfikator_s;
	string typ;
public:
	Sprzet() {
		identyfikator_s = 0;
		typ = "-";
	}

	Sprzet(int identyfikator_s, string typ) {
		this->identyfikator_s = identyfikator_s;
		this->typ = typ;
	}

	int podaj_identyfikator() {
		return identyfikator_s;
	}

	string podaj_typ() {
		return typ;
	}

	void zapisz_identyfikator() {
		cin >> identyfikator_s;
	}

	void zapisz_typ() {
		cin >> typ;
	}

	void zapisz_identyfikator(int id) {
		identyfikator_s = id;
	}

	void zapisz_typ(string t) {
		typ = t;
	}

	void wyswietl_dane() {
		cout << "\nID: " << podaj_identyfikator() <<
			"\nTyp: " << podaj_typ() << endl;
	}
};

class Osoba {
private:
	long long identyfikator_o;
	string nazwisko;
	int wiek;
public:
	Osoba() {
		identyfikator_o = 0;
		nazwisko = "-";
		wiek = 0;
	}

	Osoba(long long identyfikator_o, string nazwisko, int wiek) {
		this->identyfikator_o = identyfikator_o;
		this->nazwisko = nazwisko;
		this->wiek = wiek;
	}

	long long podaj_identyfikator() {
		return identyfikator_o;
	}

	string podaj_nazwisko() {
		return nazwisko;
	}

	int podaj_wiek() {
		return wiek;
	}

	void zapisz_identyfikator() {
		cin >> identyfikator_o;
	}
	void zapisz_identyfikator(long long id) {
		identyfikator_o = id;
	}

	void zapisz_nazwisko() {
		cin >> nazwisko;
	}
	void zapisz_nazwisko(string n) {
		nazwisko = n;
	}

	void zapisz_wiek() {
		cin >> wiek;
	}
	void zapisz_wiek(int w) {
		wiek = w;
	}

	void wyswietl_dane() {
		cout << "\nID: " << podaj_identyfikator() <<
			"\nNazwisko: " << podaj_nazwisko() <<
			"\nWiek: " << podaj_wiek() << endl;
	}
};

class Wypozyczenie {
private:
	int identyfikator_sprzetu;
	long long identyfikator_osoby;
public:
	Wypozyczenie() {
		identyfikator_osoby = 0;
		identyfikator_sprzetu = 0;
	}

	Wypozyczenie(int identyfikator_sprzetu, long long identyfikator_osoby) {
		this->identyfikator_osoby = identyfikator_osoby;
		this->identyfikator_sprzetu = identyfikator_sprzetu;
	}

	int podaj_ID_sprzetu() {
		return identyfikator_sprzetu;
	}

	long long podaj_ID_osoby() {
		return identyfikator_osoby;
	}

	void zapisz_ID_sprzetu() {
		cin >> identyfikator_sprzetu;
	}

	void zapisz_ID_osoby() {
		cin >> identyfikator_osoby;
	}

	void zapisz_ID_sprzetu(int id) {
		identyfikator_sprzetu = id;
	}

	void zapisz_ID_osoby(long long id) {
		identyfikator_osoby = id;
	}

	void wyswietl_dane() {
		cout << "\nID sprzetu: " << podaj_ID_sprzetu() <<
			"\nID osoby: " << podaj_ID_osoby() << endl;
	}
};

vector <string> szukaj(Wypozyczenie tw[], Osoba to[], Sprzet ts[]) {						// funkcja z podpunktu 3)

	vector <string> v;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (tw[i].podaj_ID_sprzetu() == ts[j].podaj_identyfikator() && ts[j].podaj_typ() == "Hulajnoga") {
				for (int k = 0; k < 5; k++) {
					if (tw[i].podaj_ID_osoby() == to[k].podaj_identyfikator() && to[k].podaj_wiek() > 25) {
						v.push_back(to[k].podaj_nazwisko());
					}
				}
			}
		}
	}

	return v;
}

int licznik_rowerow(Wypozyczenie tw[], Sprzet ts[]) {													// funkcja z podpunktu 4)

	int licznik = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (tw[i].podaj_ID_sprzetu() == ts[j].podaj_identyfikator() && ts[j].podaj_typ() == "Rower") {
				licznik++;
			}
		}
	}
	return licznik;
}



int main() {
	Sprzet s_tab[5] = { {1001, "Hulajnoga"},{1002, "Rower"},										// tablica sprzetu
					{1003, "Hulajnoga"},{1004, "Rolki"},
					{1005, "Rower"} };
	
	ofstream plik_s;																			// zapis sprzetu do pliku
	plik_s.open("Sprzet.txt");
	for (int i = 0; i <= 4; i++) {
		plik_s << "\n" << s_tab[i].podaj_identyfikator() <<
			"\n" << s_tab[i].podaj_typ() << endl;
	}

	plik_s.close();

	Osoba o_tab[5] = { {92031102314, "Nowak", 28},{97020197723,"Kowalski",23},					// tablica osob
					{80123022305, "Malinowska", 39},{95070212398, "Buczynski", 24},
					{91101903297, "Malysz", 28} };

	ofstream plik_o;																			// zapis osob do pliku
	plik_o.open("Osoby.txt");
	for (int i = 0; i <= 4; i++) {
		plik_o << "\n" << o_tab[i].podaj_identyfikator() <<
			"\n" << o_tab[i].podaj_nazwisko() <<
			"\n" << o_tab[i].podaj_wiek() << endl;
	}

	plik_o.close();

	Wypozyczenie w_tab[5] = { {s_tab[1].podaj_identyfikator(), o_tab[3].podaj_identyfikator()}, // tablica wypozyczen
							{s_tab[2].podaj_identyfikator(), o_tab[2].podaj_identyfikator()},
							{s_tab[4].podaj_identyfikator(), o_tab[1].podaj_identyfikator()},
							{s_tab[3].podaj_identyfikator(), o_tab[0].podaj_identyfikator()},
							{s_tab[0].podaj_identyfikator(), o_tab[4].podaj_identyfikator()} };
	
	ofstream plik_w;																			// zapis wypozyczen do pliku
	plik_w.open("Wypozyczenia.txt");
	for (int i = 0; i <= 4 ; i++) {
		plik_w << "\n" << w_tab[i].podaj_ID_sprzetu() <<
			"\n" << w_tab[i].podaj_ID_osoby() << endl;

	}
	plik_w.close();
	
	Wypozyczenie wo_tab[5];
	
	ifstream odczyt_w("Wypozyczenia.txt");														// odczyt wypozyczen do nowej tablicy

		if (odczyt_w.is_open())
		{
			string linia;
			int nr_linii=1;
			int i = 0;

			while (getline(odczyt_w, linia))
			{
				if (nr_linii==1)
				{
					nr_linii++;
				}
				else if (nr_linii == 2) {
					
					wo_tab[i].zapisz_ID_sprzetu(stoi(linia));
					nr_linii++;
				}
				else if (nr_linii == 3) {
					
					wo_tab[i].zapisz_ID_osoby(stoll(linia));
					nr_linii = 1;
					i++;
				}
				
			}
		}
		else
			cout << "Nie uda³o siê otworzyæ pliku";

		odczyt_w.close();


		for (int i = 0; i < 5; i++) {															
			wo_tab[i].wyswietl_dane();
		}
		

		Sprzet so_tab[5];

		ifstream odczyt_s("Sprzet.txt");														// odczyt sprzetu do nowej tablicy

		if (odczyt_s.is_open())
		{
			string linia;
			int nr_linii = 1;
			int i = 0;

			while (getline(odczyt_s, linia))
			{
				if (nr_linii == 1)
				{
					nr_linii++;
				}
				else if (nr_linii == 2) {

					so_tab[i].zapisz_identyfikator(stoi(linia));
					nr_linii++;
				}
				else if (nr_linii == 3) {

					so_tab[i].zapisz_typ(linia);
					nr_linii = 1;
					i++;
				}

			}
		}
		else
			cout << "Nie uda³o siê otworzyæ pliku";

		odczyt_s.close();

		for (int i = 0; i < 5; i++) {
			so_tab[i].wyswietl_dane();
		}


		Osoba oo_tab[5];
		ifstream odczyt_o("Osoby.txt");															// odczyt osob do nowej tablicy

		if (odczyt_o.is_open())
		{
			string linia;
			int nr_linii = 1;
			int i = 0;

			while (getline(odczyt_o, linia))
			{
				if (nr_linii == 1)
				{
					nr_linii++;
				}
				else if (nr_linii == 2) {

					oo_tab[i].zapisz_identyfikator(stoll(linia));
					nr_linii++;
				}
				else if (nr_linii == 3) {

					oo_tab[i].zapisz_nazwisko(linia);
					nr_linii++;
					
				}
				else if (nr_linii == 4) {
					oo_tab[i].zapisz_wiek(stoi(linia));
					nr_linii = 1;
					i++;
				}
			}
		}
		else
			cout << "Nie uda³o siê otworzyæ pliku";

		odczyt_o.close();

		for (int i = 0; i < 5; i++) {
			oo_tab[i].wyswietl_dane();
		}

		cout << "\nOsoby w wieku powyzej 25 lat, ktore wypozyczyly hulajnoge:" << endl;
		vector <string> wyszukano = szukaj(w_tab, o_tab, s_tab);
		for (int i = 0; i < wyszukano.size(); i++) {
			cout <<  wyszukano[i] << endl;
		}

		cout << "\nLiczba wypozyczonych rowerow: " << licznik_rowerow(wo_tab, so_tab) << endl;

}

*/
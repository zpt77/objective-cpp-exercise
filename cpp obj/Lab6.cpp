/*#include <iostream>
#include <string>

using namespace std;

class Urzadzenie {

protected:
	string firma;
	int obroty;

public:
	Urzadzenie(){}

	Urzadzenie(string firma, int obroty) {
		this->firma = firma;
		this->obroty = obroty;
	}

	string daj_firme() {
		return firma;
	}

	int daj_obroty() {
		return obroty;
	}

	void pokaz_opis() {
		cout << "\nFirma: " << daj_firme() << "\nObroty: " << daj_obroty() << " ob./min" << endl;
	}
};

class SzlifierkaKatowa : public Urzadzenie {
private:
	int moc;
	int tarcza;

public:

	SzlifierkaKatowa(string firma, int obroty, int moc, int tarcza) :Urzadzenie(firma, obroty){ 
		this->moc = moc;
		this->tarcza = tarcza;
	}


	int daj_moc() {
		return moc;
	}

	int daj_tarcze() {
		return tarcza;
	}

	void pokaz_opis() {
		cout << "\nFirma: " << daj_firme() << "\nObroty: " << daj_obroty() << " ob./min"
			<< "\nMoc: " << daj_moc() << " W "<< "\nSrednica tarczy: " << daj_tarcze() << " mm " << endl;
	}
};

class WiertarkoWkretarka : public Urzadzenie {
private:
	double napiecie;
	string bateria;
	int czas_ladow;

public:
	
	WiertarkoWkretarka(string firma, int obroty, double napiecie, string bateria, int czas_ladow) :Urzadzenie(firma, obroty) {
		this->napiecie = napiecie;
		this->bateria = bateria;
		this->czas_ladow = czas_ladow;
	}

	double daj_napiecie() {
		return napiecie;
	}

	string daj_baterie() {
		return bateria;
	}

	int daj_czas_ladow() {
		return czas_ladow;
	}

	void pokaz_opis() {
		cout << "\nFirma: " << daj_firme() << "\nObroty: " << daj_obroty() << " ob./min"
			<< "\nNapiecie: " << daj_napiecie() << " V "<< "\nBateria: " << daj_baterie()
			<< "\nCzas ladowania: " << daj_czas_ladow() << " min" << endl;
	}
};

SzlifierkaKatowa szukaj_szlifierki_max_ob(SzlifierkaKatowa tab[]) {
	int ind;
	int max_ob = 0;
	for (int i = 0; i < 4; i++) {
		if (max_ob < tab[i].daj_obroty()) {
			max_ob = tab[i].daj_obroty();
			ind = i;
		}
	}
	return tab[ind];
}

WiertarkoWkretarka szukaj_wiert_min_lad(WiertarkoWkretarka tab[]) {
	int ind;
	int min_lad = tab[0].daj_czas_ladow();
	for (int i = 0; i < 4; i++) {
		if (min_lad > tab[i].daj_czas_ladow()) {
			min_lad = tab[i].daj_czas_ladow();
			ind = i;
		}
	}
	return tab[ind];
}

int main() {

	
	SzlifierkaKatowa sk_tab[4] = { {"DeWalt", 4000, 850, 250},{"Bosch", 8000, 1100, 125},
									{"Yato", 2500, 710, 140},{"MacAllister", 3300, 600, 150} };

	WiertarkoWkretarka wk_tab[4] = { {"Makita", 1300, 18.5, "Li-Ion", 60},{"DeWalt", 1100, 15, "NiCd", 180},
										{"Bosch", 1500, 19, "NiMH", 360},{"Metabo", 1400, 22.5, "Li-Ion", 30} };

	szukaj_szlifierki_max_ob(sk_tab).pokaz_opis();

	szukaj_wiert_min_lad(wk_tab).pokaz_opis();

}*/
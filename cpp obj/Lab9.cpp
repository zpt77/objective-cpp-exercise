#include <iostream>

using namespace std;


class Samochod {
public:
	virtual int podaj_pojemnosc() = 0;
	virtual void pokaz_opis() = 0;
	virtual ~Samochod(){}
};

class SamochodOsobowy: public Samochod {

	
private: 
	int liczba_miejsc;

public: 

	SamochodOsobowy(int liczba_miejsc) {

		this->liczba_miejsc=liczba_miejsc;
	}
	int podaj_pojemnosc() {
		return  liczba_miejsc;
	}

	void pokaz_opis() {
		cout << "\nTo jest samochod osobowy z liczba miejsc = " << podaj_pojemnosc() << endl;
	}
};

class SamochodCiezarowy: public Samochod {

private: 
	int ladownosc;
public:

	SamochodCiezarowy(int ladownosc) {

		this->ladownosc = ladownosc;
	}

	int podaj_pojemnosc() {
		return ladownosc;
	}

	void pokaz_opis() {
		cout << "\nTo jest samochod ciezarowy z ladownoscia = " << podaj_pojemnosc() << " kg" << endl;

	}
};

Samochod* szukaj_pojemnosc(Samochod *tab[], int poj) {
	int ind;
	for (int i = 0; i < 12; i++) {
		if (tab[i]->podaj_pojemnosc() == poj) {
			tab[i]->pokaz_opis();
			ind = i;
			
		}
	}
	return tab[ind];
}

int main() {

	SamochodCiezarowy* a = new SamochodCiezarowy(450);
	SamochodCiezarowy* b = new SamochodCiezarowy(550);
	SamochodCiezarowy* c = new SamochodCiezarowy(120);
	SamochodCiezarowy* d = new SamochodCiezarowy(1000);
	SamochodCiezarowy* e = new SamochodCiezarowy(800);
	SamochodCiezarowy* f = new SamochodCiezarowy(685);

	SamochodOsobowy* g = new SamochodOsobowy(6);
	SamochodOsobowy* h = new SamochodOsobowy(4);
	SamochodOsobowy* i = new SamochodOsobowy(5);
	SamochodOsobowy* j = new SamochodOsobowy(2);
	SamochodOsobowy* k = new SamochodOsobowy(5);
	SamochodOsobowy* l = new SamochodOsobowy(3);


	Samochod* tab_s[12] = {a,b,c,d,e,f,g,h,i,j,k,l};
	
	szukaj_pojemnosc(tab_s, 550);
	
}
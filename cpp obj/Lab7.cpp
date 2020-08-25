/*#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

class Bryla {

public:
	virtual double objetosc() = 0;

	virtual double pole_powierzchni_calkowitej() = 0;

	virtual void pobierz_dane() = 0;

	virtual ~Bryla() {}
};

class Stozek: public Bryla {
private:
	int r, h, l;
public:


	double objetosc() {
		
		return ((M_PI * pow(r,2))*h)/3;
		
	}

	double pole_powierzchni_calkowitej() {
		return (M_PI * pow(r, 2)) + (M_PI * r * l);
		
	}

	void pobierz_dane() {
		cout << "\nPodaj promien: ";
		cin >> r;
		cout << "\nPodaj wysokosc: ";
		cin >> h;
		cout << "\nPodaj tworzaca: ";
		cin >> l;
	}
};

class Walec : public Bryla{
private:
	int r, h;

public:  

	double objetosc() {
		return M_PI * pow(r, 2) * h;
	}

	double pole_powierzchni_calkowitej() {
		return 2 * (M_PI * pow(r, 2)) + (2 * M_PI * r * h);
	}

	void pobierz_dane() {
		cout << "\nPodaj promien: ";
		cin >> r;
		cout << "\nPodaj wysokosc: ";
		cin >> h;
	}
};

class Kula : public Bryla {
private:
	int r;

public:


	double objetosc() {
		return (4 * M_PI * pow(r, 3)) / 3;
	}
	double pole_powierzchni_calkowitej() {
		return 4 * M_PI * pow(r, 2);
	}
	void pobierz_dane() {
		cout << "\nPodaj promien: ";
		cin >> r;
	}
};

class CzworoscianForemny : public Bryla {
private:
	int a;
public:

	

	double objetosc() {
		return (sqrt(2) * pow(a, 3)) / 12;
	}
	double pole_powierzchni_calkowitej() {
		return sqrt(3) * pow(a, 2);
	}
	void pobierz_dane() {
		cout << "\nPodaj dlugosc krawedzi: ";
		cin >> a;
	}
};


class Prostopadloscian : public Bryla {
private:
	int a, b, c;
public:

	double objetosc() {
		return a * b * c;
	}
	double pole_powierzchni_calkowitej() {
		return 2 * (a * b + b * c + a * c);
	}
	void pobierz_dane() {
		cout << "\nPodaj dlugosc krawedzi a: ";
		cin >> a;
		cout << "\nPodaj dlugosc krawedzi b: ";
		cin >> b;
		cout << "\nPodaj dlugosc krawedzi c: ";
		cin >> c;
	}
};

void obsluga_bryly(Bryla& b) {
	b.pobierz_dane();
	cout << "\nObjetosc bryly: " << b.objetosc() 
			<< "\nPole powierzchni calkowitej bryly: " << b.pole_powierzchni_calkowitej() << endl;
}



int main() {


	
	Bryla* wsk = new Prostopadloscian;
	wsk->pobierz_dane();
	cout << "\nObjetosc bryly: " << wsk->objetosc() 
			<< "\nPole powierzchni calkowitej bryly: " << wsk->pole_powierzchni_calkowitej() << endl;
	delete wsk;

	cout << "\nCzworoscian foremny: " << endl;
	CzworoscianForemny c;
	obsluga_bryly(c);

	cout << "\nStozek: " << endl;
	Stozek s;
	obsluga_bryly(s);

	cout << "\nWalec: " << endl;
	Walec w;
	obsluga_bryly(w);

	cout << "\nKula: " << endl;
	Kula k;
	obsluga_bryly(k);


}*/
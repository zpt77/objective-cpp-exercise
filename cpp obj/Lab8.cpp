/*#include <iostream>

using namespace std;

class Nazwisko {
	friend class Pelne;
private:
	char* nazwisko;

public:
	Nazwisko() {}

	Nazwisko(char* nazwisko) {
		this->nazwisko = nazwisko;
		cout << "\n" << nazwisko << endl;
	}

	~Nazwisko() {
		cout << "\n" << nazwisko << endl;
		delete nazwisko;
	}

};

class Pelne : public Nazwisko {
	
private:
	char* imie;

public:

	Pelne(char* imie, char* nazwisko): Nazwisko(nazwisko) {
		this->imie = imie;
		cout << "\n" << imie << endl;
	}

	Pelne() {}

	~Pelne() {
		cout << "\n" << imie << endl;
		delete imie;
	}

};

int main() {
	
	Nazwisko* p = new Pelne();
	delete p;

}*/
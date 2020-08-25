/*#include <iostream>

using namespace std;

class Wektor {
	double x, y, z;

	friend Wektor operator *(Wektor, int);
	friend Wektor operator -(Wektor, Wektor);
	friend Wektor operator /(Wektor, int);

public:
	Wektor(double x, double y, double z) {
		this->x = x;
		this->y = y;
		this->z = z;
	} 

	double podaj_x() {
		return x;
	}

	double podaj_y() {
		return y;
	}

	double podaj_z() {
		return z;
	}

	void wyswietl_wektor() {
		cout << "\n[" << podaj_x() << ", " << podaj_y() << ", " << podaj_z() << "]" << endl;
	}

	Wektor operator +(Wektor w1) {
		Wektor w(w1.x + x, w1.y + y, w1.z + z);

		return w;
	}

	double operator *(Wektor w1) {
		double s = w1.x * x + w1.y * y + w1.z * z;

		return s;
	}

};

Wektor operator *(Wektor w1, int x) {
	Wektor w(w1.x * x, w1.y * x, w1.z * x);
	return w;
}

Wektor operator -(Wektor w1, Wektor w2) {
	Wektor w(w1.x - w2.x, w1.y - w2.y, w1.z - w2.z);

	return w;
}

Wektor operator /(Wektor w1, int s) {
	Wektor w(w1.x/s, w1.y/s, w1.z/s);
	return w;
}
int main() {

	Wektor w1(1, 2, 3);
	Wektor w2(2, 2, 2);

	Wektor tmp_w = w1 + w2;
	cout << "\nWynik dodawania wektorow: ";
	tmp_w.wyswietl_wektor();
	int tmp_int = w1 * w2;
	cout << "\nWynik mnozenia skalarnego wektorow wektorow: ";
	cout << "\n" << tmp_int << endl;
	tmp_w = w1 * 3;
	cout << "\nWynik mnozenia wektora przez liczbe: ";
	tmp_w.wyswietl_wektor();
	tmp_w = w2 - w1;
	cout << "\nWynik odejmowania wektorow: ";
	tmp_w.wyswietl_wektor();
	tmp_w = w2 / 4;
	cout << "\nWynik dzielenia wektora przez skalar: ";
	tmp_w.wyswietl_wektor();

}*/
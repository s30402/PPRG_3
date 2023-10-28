#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Zad 1

	int n;
	cout << "Podaj rozmiar prostok¹tu: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	// Zad 2

	cout << endl;

	int t = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < t; j++) {
			cout << "* ";
		}
		t++;
		cout << endl;
	}

	// Zad 3

	cout << endl;

	double w=0, c;

	cout << "Podaj ilosc ocen: ";
	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> c;
		w += c;
	}

	cout << "Srednia ocen wynosi: " << w / t << endl;

	// Zad 4

	cout << endl;
	double p,q;

	cout << "Podaj potege i nastepnie wykladnik: ";
	cin >> p >> w;
	q = p;

	for (int i = 0; i < w; i++) {
		p = p * q;
	}

	cout << p/2 << endl;

	// Zad 5

	cout << endl;

	string liczba;

	cout << "Wprowadz liczbe calkowita: ";
	cin >> liczba;

	int size = liczba.length();
	int a=0, b=0;

	for (int i = 0; i < size; i++) {
		b = (int)liczba[i] - 48;
		cout << b << endl;
		a = a + b;
	}

	cout << a;

}


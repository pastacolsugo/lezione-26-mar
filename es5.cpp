#include <iostream>
using namespace std;

int main () {
	int n;
	do {
		cout << "inserisci N: ";
		cin >> n;
	} while (n % 2 != 0 && n <= 0);

	// ricordarsi di creare gli array solo DOPO aver inserito N
	double a[n];
	double b[n / 2];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n / 2; i++) {
		b[i] = a[2 * i] * a[(2 * i) + 1];
	}

	// stampa
	for (int i = 0; i < n / 2; i++) {
		cout << b[i] << ' ';
	}

	cout << endl;

}

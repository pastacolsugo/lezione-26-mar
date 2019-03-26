#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "inserisci N: ";
	cin >> n;

	// ricordarsi di creare gli array solo DOPO aver inserito N
	int a[n];
	int nPari = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			nPari++;
		}
	}

	int nDispari = n - nPari;
	int p[nPari], d[nDispari];
	int pi = 0, di = 0;

	for (int i = 0, pi = 0, di = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			p[pi] = a[i];
			pi++;
		} else {
			d[di] = a[i];
			di++;
		}
	}

	// stampa
	cout << "Pari: ";
	for (int i = 0; i < nPari; i++) {
		cout << p[i] << ' ';
	}

	cout << endl << "Dispari: ";
	for (int i = 0; i < nDispari; i++) {
		cout << d[i] << ' ';
	}
	cout << endl;

}

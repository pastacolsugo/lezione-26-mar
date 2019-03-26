#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "inserisci N: ";
	cin >> n;
	// ricordarsi di creare gli array solo DOPO aver inserito N
	int a[n];
	int scambia;


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n / 2; i++) {
		scambia = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = scambia;
		// a[i] = a[n - i - 1];
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << ' ';
	}

	cout << endl;

}

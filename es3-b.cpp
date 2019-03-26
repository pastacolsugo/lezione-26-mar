#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "inserisci N: ";
	cin >> n;
	// ricordarsi di creare gli array solo DOPO aver inserito N
	int a[n];
	int b[n];


	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n / 2; i++) {
		b[i] = a[n - i - 1];
	}

	// b[0] = a[n - 1];
	// b[1] = a[n - 2];
	// b[2] = a[n - 3];
	// ...

	for (int i = 0; i < n; i++) {
		cout << b[i] << ' ';
	}

	cout << endl;

}

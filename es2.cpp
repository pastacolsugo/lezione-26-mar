#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "inserisci N: ";
	cin >> n;

	// ricordarsi di creare gli array solo DOPO aver inserito N
	int a[n], b[n], c[2 * n]; 

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < 2 * n; i++) {
		if (i % 2 == 0) {
			c[i] = a[i / 2];
		} else {
			c[i] = b[i / 2];
		}
	}
	for (int i = 0; i < 2 * n; i++) {
		cout << c[i] << ' ';
	}
	cout << endl;
}
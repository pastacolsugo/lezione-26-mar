#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "inserisci N: ";
	cin >> n;

	int a[n];
	int maxVal = a[0];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] > maxVal) {
			maxVal = a[i];
		}
	}

	cout << "Il massimo e': " << maxVal << endl;

}

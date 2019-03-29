#include <iostream>
using namespace std;

int main() {
	int n = 0;
	do {
		cout << "Inserisci n: ";
		cin >> n;
	} while (n > 20 || n < 1);
	
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool hoGiaContato[n];
	for (int i = 0; i < n; i++) {
		hoGiaContato[i] = false;
	}

	for (int i = 0; i < n; i++) {
		if (hoGiaContato[i] != true) {
			int k = 0;
			for (int j = 0; j < n; j++) {
				if (a[i] == a[j]) {
					k++;
					hoGiaContato[j] = true;
				}
			}
			cout << "Il numero " << a[i] << " appare " << k << " volte" << endl;
		}
	}
}
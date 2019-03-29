#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0;
	cin >> n >> m;
	float a[n], b[m];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int x = 0;
	if (n > m) {
		x = m;
	} else {
		x = n;
	}
	float c[x];
	int k = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i] == b[j]){
				c[k] = b[j];
				k++;
				// break;
			}
		}
	}

	for (int i = 0; i < k; i++) {
		cout << c[i] << ' ';
	}
	cout << endl;
}
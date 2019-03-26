#include <iostream>
using namespace std;

int main () {
	int n, voti[100];
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> voti[i];
	}

	for (int i = 0; i < n; i++) {
		cout << voti[i] << ' ';
	}

	cout << endl;

}

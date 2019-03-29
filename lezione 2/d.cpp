#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
	int n = 100;
	srand(time(NULL));	
	int a[n], b[n];

	for (int i = 0; i < n; i++) {
		a[i] = (rand()%(120 - 30 + 1)) + 30;
		b[i] = (rand()%(120 - 30 + 1)) + 30;
	}

	int c[n];
	int k = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
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
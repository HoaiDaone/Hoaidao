#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a[5];
	int min = INT_MAX, max = INT_MIN;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
 	}
 	cout << max + min;
}

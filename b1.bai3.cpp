#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int div;
	for (int i = 1; i <= m; i++) {
		if (m % i == 0 && n % i == 0) {
			div = i;
		}
	}
	cout << div;
}

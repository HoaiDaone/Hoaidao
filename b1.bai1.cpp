#include <iostream>
#include <string.h>

using namespace std;

int main() {
	string str, str1;
	getline(cin, str);
	
	for (int i = str.length() - 1; i >=0; i--) {
		str1.push_back(str[i]);
	}
	cout << str1;
} 

#include <iostream>

using namespace std;

void main() {
	int tinggi;

	//cin input
	cout << "Masukkan Input : ";
	cin >> tinggi;

	//segitiga
	for (int i = 0; i <= tinggi; i++)
	{
		for (int j = 0; j < i; j++) {
			cout << "^";
		}
		cout << "\n";
	}

}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	int data[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
	vector <int> vect(data, data + sizeof(data) / sizeof(int));

	//menampilkan vector
	cout << "Deret sebelum di sorting: \n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}

	//sorting vector
	sort(vect.begin(), vect.end());
	cout << endl;

	//sorting vector besar ke kecil
	cout << endl;
	sort(vect.begin(), vect.end(), greater<int>());
	//menampilkan hasil
	cout << "\nDeret setelah di sorting dari besar ke kecil: \n";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " | ";
	}

	// Mencari median
	int size = vect.size();
	double median;

	if (size % 2 == 0) {
		// Jika jumlah elemen genap, ambil rata-rata dari dua elemen tengah
		median = (vect[size / 2 - 1] + vect[size / 2]) / 2.0;
	}
	else {
		// Jika jumlah elemen ganjil, ambil elemen tengah
		median = vect[size / 2];
	}

	// Menampilkan median
	cout << endl;
	cout << "Median: " << median << endl;

       
    
	
}
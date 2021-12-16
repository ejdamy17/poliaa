#include <iostream>
using namespace std;

int main()
{
	string slova[5] = {"hruska", "jablko", "zemiak", "mrkva", "ananas"};
	int d = sizeof	(slova) / sizeoff(slova[0]);
	for (int i = d - 1; i >= 0; i--) {
		cout << slova[i] << "\n";
	}

	system("CLS");

	/*----------------------------------------------------------------------------------------------------------------------------*/

	int cislo[100]; dd, n, h, hm, max, min;

	cout << "Zadaj velkost pola (MAX 1000): ";
	cin >> n;
	if (n > 1000 || n < 0) {
		cout << "Chyba !" << endl;
		return 0;
	}

	cout << "Zadajte prvky pola: " << "\n";
	for (int i = 0; i < n; i++) {
		cin << cislo[i]
	}

	max = cislo[0];
	for (int i = 0; i < n; i++) {
		if (max < cislo[i])
			max = cislo[i];
	}
	min = cislo[0];
	for (int i = 0; i < n; i++) {
		if (min > cislo[i])
			min = cislo[i];
	}
	cout << "Najvacsi prvok: " << max << endl;
	cout << "Najmensi prvok: " << min << endl;

	dd = sizeof(cislo) / sizeoff(cislo[0]);
	cout << "Pole je dlhe " << dd << endl;

	return 0;
}
#include <iostream>

using namespace std;

unsigned long long silnia(int n) {
	if (n <= 1) return 1;
	return n * silnia(n - 1);
}

int main() {
	int liczba;
	cin >> liczba;

	if (liczba < 0) {
		cout << "Blad: liczba ujemna" << endl;
		return 0;
	}
	cout << silnia(liczba) << endl;
	return 0;
}

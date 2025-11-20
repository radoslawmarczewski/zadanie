#include <iostream>

using namespace std;

int main() {
	int liczba;
	cin >> liczba;

	if (liczba < 0) {
		cout << "Blad: liczba ujemna" << endl;
		return 0;
	}
	cout << liczba << endl;
	return 0;
}

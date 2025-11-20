#include <iostream>

using namespace std;

unsigned long long silnia(int n) {
	if (n <= 1) return 1;
	return n * silnia(n - 1);
}

int main() {
	int liczba;
	cin >> liczba;
	cout << silnia(liczba) << endl;
	return 0;
}

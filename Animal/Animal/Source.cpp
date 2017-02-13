#include <iostream>
using namespace std;

int main() {
	int voice;
	cout << "How many woofs do you want" << endl;
	cin >> voice;
	for (int i = 0; i < voice; i++) {
		cout << "Woof" << endl;
	}
}
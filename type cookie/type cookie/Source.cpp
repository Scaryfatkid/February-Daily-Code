#include <iostream>
using namespace std;
int main() {
	int type;
	cout << " what type of cookie would you like?" << endl;
	cout << "oatmeal(3) Chocolate chip (2) peanutbutter(1)" << endl;
	cin >> type;
	switch(type) {
		case 1:
			cout << "peanut butter cookies" << endl;

			break;
		case 2:
				cout << "chocolate chip" << endl;
				break;
		case 3:
					cout << "oatmeal cookies" << endl;
					break;
	}
}
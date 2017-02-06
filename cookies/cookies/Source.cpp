#include <iostream>
using namespace std;

int main() {
	int cookies;
	cout << "how many cookies would you like" << endl;
	cin >> cookies;
	
	if (cookies < 5) {
		cout << "Are You sure" << endl;
	}
	else if (cookies > 5 && cookies < 10) {
		cout << "Thats a good amount" << endl;
	}
	else {
		cout << "thats too many cookies" << endl;
	}
}
 


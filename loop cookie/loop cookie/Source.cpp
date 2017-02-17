#include <iostream>
using namespace std;

int main() {
	char cookies;
	
	while (1) {
		cout << " would you like a cookie"<< endl;
		cin>> cookies;
		if (cookies == 'y') {
			cout << "here's your cookie." << endl;
		}
		else if (cookies == 'n') {
			cout << "fine no cookies for you punk" << endl;
		}
		else
			cout << "that doesn't answer my question you dummy" << endl;
	}
	
}
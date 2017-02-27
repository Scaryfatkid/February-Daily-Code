#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	for (int i = 0;i < 50;i++) {
		Beep(100, 100);
		Beep(200, 200);
		Beep(300, 300);
		Beep(400, 400);
		Beep(300, 300);
		Beep(200, 200);
		
	}
}
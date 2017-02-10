#include <stdio.h>
int main() {
	char string[64];
	printf("what is your full name?\n");
	fgets(string, 64, stdin);
	printf("HEllo,%s! NIce to meet you!\n", string);
	return 0;
}
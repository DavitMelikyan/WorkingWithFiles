#include <stdio.h>

int main() {
	const int size = 1000;
	FILE* fptr = fopen("smtext.txt", "r");
	char str[size];
	fread(str, 1, size, fptr);
	fputs(str, stdout);
	return 0;
}

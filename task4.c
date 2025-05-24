#include <stdio.h>

int main() {	
	const int size = 6;
	char str[size];
	FILE* fptr = fopen("smtext.txt", "r");
	fread(str, 1, 5, fptr);
	fseek(fptr, 0, SEEK_SET);
	fread(str, 1, 5, fptr);
	fclose(fptr);
	printf("%s\n", str);
	return 0;
}

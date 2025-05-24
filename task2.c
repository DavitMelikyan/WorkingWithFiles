#include <stdio.h>

int main() {
	const int size = 1000;
	char str[size];
	FILE* fptr = fopen("smtext.txt", "r+");
	int fsize = fread(str, sizeof(char),size, fptr);
	for (int i = 0; i < fsize - 1; ++i) {
		str[i] |= 32;
	}
	fseek(fptr, 0, SEEK_SET);
	fwrite(str, sizeof(char), fsize, fptr);
	str[fsize] = '\0';
	fclose(fptr);
	printf("%s\n", str);
	return 0;
}


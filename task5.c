#include <stdio.h>

int main() {
	const int size = 16;
	FILE* fptr1 = fopen("a.txt", "r");
	FILE* fptr2 = fopen("b.txt", "r+");
	char str[size];
	for (int i = 1; i < size; ++i) {
		fseek(fptr1, -i - 1, SEEK_END);
		fread(str, 1, 1, fptr1);
		fwrite(str, 1, 1, fptr2);
	}
	fseek(fptr2, 0, SEEK_SET);
	fread(str, 1, size - 1, fptr2);
	fclose(fptr1);
	fclose(fptr2);
	printf("%s\n", str);
	return 0;
}

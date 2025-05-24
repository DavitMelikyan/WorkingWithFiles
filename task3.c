#include <stdio.h>

int main() {
	int arr[1000] = {};
	int rd = 0;
	int count = 0;
	FILE* fptr = fopen("file.txt", "r");
	while ((rd = fread(arr, 1, 1, fptr)) == 1) {
		 ++count;
	}
	--count;
	fclose(fptr);
	printf("File has %d numbers\n", count);
	return 0;
}

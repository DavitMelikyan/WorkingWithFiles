#include <stdio.h>
#include <limits.h>
int main() {
	const int size = 1000;
	int arr[size] = {};
	FILE* fptr = fopen("file.txt", "r");
	int count = fread(arr, 1, INT_MAX, fptr);
	--count;
	fclose(fptr);
	printf("File has %d numbers\n", count);
	return 0;
}

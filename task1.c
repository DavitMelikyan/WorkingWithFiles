#include <stdio.h>

int main() {
	const int size = 5;
	int arr[size] = {1,2,3,4,5};
	FILE* fptr1 = fopen("file.txt", "w");
	fwrite(arr, sizeof(int), 5, fptr1);
	fclose(fptr1);
	
	int arr2[size] = {};
	FILE* fptr2 = fopen("file.txt", "r");
	fread(arr2, sizeof(int), 5, fptr2);
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}

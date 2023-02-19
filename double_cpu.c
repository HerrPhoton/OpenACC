#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define ARR_LEN 10000000
#define PI 3.1415926535897932384626433832795
#define TYPE double

int main() {
	
	clock_t start = clock();

	TYPE* arr = (TYPE*)malloc(ARR_LEN * sizeof(TYPE));
	double sum = 0;
	
	clock_t start_c = clock();

	for (int i = 0; i < ARR_LEN; i++)
		arr[i] = sin(i * 2 * PI / ARR_LEN);
	
	for (int i = 0; i < ARR_LEN; i++)
		sum += arr[i];
	
	clock_t end_c = clock();

	printf("cycle time: %lfs\n", (double)(clock() - start_c) / CLOCKS_PER_SEC);
	printf("time: %lfs\n", (double)(clock() - start) / CLOCKS_PER_SEC);
	printf("sum: %.18lf\n", sum);
	
	free(arr);
	return 0;
}















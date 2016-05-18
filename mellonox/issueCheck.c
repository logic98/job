/*
 * What are all the possible errors in the function foo?
 */
int * foo(char array[100]) {
	int new_array[25];
	int i;

	for (i = 0; I < 25; i++) {
		new_array[i] = array[100 - i];
	}

	return new_array;
}

int foo(int i) {
	int arr[] = { 5, 3, 8, 10, 12, 8, 120, 70, 20, 30 };
	int j;

	if (i > 0)
		j = 2 * i;

	return i / arr[j];
}

#include <iostream>

int binary(int meow[], int valeur, int taille)
{
	int d = 0;
	int f = taille;

	while(d <= f) {
		int m = (d + f) / 2;

		if (meow[m] == valeur) {
			return m;
		} else if (meow[m] < valeur) {
			d = m + 1;
		} else {
			f = m - 1;
		}
	}

	return -1;
}


auto main() -> int {

	int arr[] = {1, 2, 19, 23, 29, 33};
	int taille = sizeof(arr) / sizeof(arr[0]);


	std::cout << binary(arr, 23, taille);
}
#include <iostream>
#include <random>

int max_element(int numbers[], int size) {
	int max_elem;
	
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			max_elem = numbers[i];
		}

		if (numbers[i] > max_elem) {
			max_elem = numbers[i];
		}
	}

	return max_elem;

}


int main() {
	const int SIZE = 20;
	int test[SIZE] = {};

	for (int i = 0; i < SIZE; i++) {
		test[i] = rand() % 100;
	}

	for (int i = 0; i < SIZE; i++) {
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;
	std::cout << max_element(test, SIZE);
}
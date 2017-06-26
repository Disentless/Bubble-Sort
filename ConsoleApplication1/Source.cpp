#include <iostream>
#include <time.h>

void print(int* arr, int size) {
	for (auto i = 0; i < size; ++i) {
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}

int* bubble_sort(int* arr, int size) {
	int count;
	do {
		count = 0;
		for (int i = 1; i < size; ++i) {
			if (i > 0 && arr[i - 1] > arr[i]) {
				int c = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = c;
				count++;
			}
		}
		if (count == 0) break;
		count = 0;
		//print(arr, size);
		//std::cout << "shift" << std::endl;
		for (int i = size-1; i > -1; --i) {
			if (i > 0 && arr[i - 1] > arr[i]) {
				int c = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = c;
				count++;
			}
		}
		//print(arr, size);
		//std::cout << "step" << std::endl;
	} while (count != 0);
	return arr;
}



int main() {
	std::srand(time(0));
	const int N = 10;
	int* arr = new int[N];
	for (int i = 0; i < N; ++i) {
		arr[i] = std::rand() % 5000;
	}
	print(arr, N);
	arr = bubble_sort(arr, N);
	print(arr, N);

	std::cin.seekg(0);
	std::cin.ignore();
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int arr[] = {1, 0, 5, 6, 2, 4, 8, 9, 3, 7}; // размерность 10

 // Сортировка массива пузырьком
	for (int i = 0; i < 10 - 1; i++) {
		for (int j = 0; j < 10 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {											
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// Вывод отсортированного массива на экран
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

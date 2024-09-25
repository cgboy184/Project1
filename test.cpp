#include "iostream"
using namespace std;

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr[] = { 64,99,14,23.100,56,30 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	cout << "ð������֮��";
	printArray(arr, n);
	return 0;
}

// welike
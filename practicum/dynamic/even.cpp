#include <iostream>
using namespace std;

struct my_array { 
	int* arr;
	int size;
};

my_array find_even(int* arr, int size)
{
	int count_even = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] % 2 == 0) {
			count_even++;
		}
	}

	int* even = new int[count_even];
	int j = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] % 2 == 0) {
			even[j] = arr[i];
			j++;
		}
	}

	return { even, count_even };
}

int main(int argc, char* argv[])
{
	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; ++i) {
		cin >> arr[i];
	}

	my_array even = find_even(arr, size);

	for (int i = 0; i < even.size; ++i){
		cout << even.arr[i] << " ";
	}

	delete[] arr;
	delete [] even.arr;
	return 0;
}

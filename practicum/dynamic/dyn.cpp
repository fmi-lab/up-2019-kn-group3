#include <cstring>
#include <iostream>

using namespace std;

char* f(const char* str, int size, int n)
{
	if (size == 0) {
		return nullptr;
	}

	unsigned int word_count = 1;
	int i = 0;
	for (; i < size && word_count < n; ++i) {
		if (str[i] == ' ') {
			word_count++;
		}
	}

	int len = 0;
	while (len + i < size && str[i + len] != ' ') {
		len++;
	}

	if (len == 0) {
		return nullptr;
	}

	char* word = new char[len];
	for (int j = 0; j < len; ++j) {
		word[j] = str[i + j];
	}

	return word;
}

int main()
{
	const char* x = 
		"pyrwa wtora treta";
	int size = strlen(x);
	int n;
	cin >> n;

	char* word = f(x, size, n);
	std::cout << word << std::endl;
	delete [] word;

	return 0;
}

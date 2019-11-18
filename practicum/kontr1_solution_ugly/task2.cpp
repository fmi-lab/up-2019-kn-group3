#include <iostream>
using namespace std;

int main()
{
	// zad 2
	char str[256];
	char S[255];
	char N[255];
	int s_it = 0;
	int n_it = 0;

	for (int i = 0; i < 255; i++) {
		if (str[i] >= 'a' && str[i] <= 'j') {
			S[s_it] = str[i];
			s_it++;
		}
		if (str[i] >= '0' && str[i] <= '9') {
			N[n_it] = str[i];
			n_it++;
		}
	}

	if (s_it != n_it) {
		cout << "No! \n";
		return 0;
	}

	bool equal = true;

	for (int i = 0; i < s_it; i++) {
		if (S[i] - 'a' != N[i] - '0') {
			equal = false;
			break;
		}
	}

	if (equal)
		cout << "Yes!\n";
	else
		cout << "No! \n";

	return 0;
}

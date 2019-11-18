#include <iostream>
using namespace std;

int main()
{
	int S = 0, P = 0;
	int points[10][2], square[10][3];

	while (S < 1 || S > 10 || P < 1 || P > 10) {
		cin >> S >> P;
	}

	for (int i = 0; i < P; i++) {
		cin >> points[i][0] >> points[i][1];
	}
	for (int i = 0; i < S; i++) {
		cin >> square[i][0] >> square[i][1] >> square[i][2];
	}

	int pointsInAnySquare = 0;
	for (int i = 0; i < P; i++) {
		for (int j = 0; j < S; j++) {
			if (points[i][0] >= square[j][0] &&
			    points[i][0] <= square[j][0] + square[j][2] &&
			    points[i][1] >= square[j][1] - square[j][2] &&
			    points[i][1] <= square[j][1]) {
				pointsInAnySquare++;
				break;
			}
		}
	}

	int squaresWithoutPoint = 0;
	for (int j = 0; j < S; j++) {
		bool emptySquare = true;
		for (int i = 0; i < P; i++) {
			if (points[i][0] >= square[j][0] &&
			    points[i][0] <= square[j][0] + square[j][2] &&
			    points[i][1] >= square[j][1] - square[j][2] &&
			    points[i][1] <= square[j][1]) {
				emptySquare = false;
			}
		}
		if (emptySquare) {
			squaresWithoutPoint++;
		}
	}

	int maxPoints = 0, biggestSq = 0;
	for (int j = 0; j < S; j++) {
		int pointsinSquare = 0;
		for (int i = 0; i < P; i++) {
			if (points[i][0] >= square[j][0] &&
			    points[i][0] <= square[j][0] + square[j][2] &&
			    points[i][1] >= square[j][1] - square[j][2] &&
			    points[i][1] <= square[j][1]) {
				pointsinSquare++;
			}
		}
		if (pointsinSquare > maxPoints) {
			maxPoints = pointsinSquare;
			// j
			biggestSq = j;
		}
	}

	return 0;
}

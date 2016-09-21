#include <iostream>
#include "utils.h"
#include <cmath>
using namespace std;

int numDiv(int N) {
	int numberDiv = 2;
	int M = pow(N, 0.5) + 1;
	for (int factor = 2; factor < M; factor++) {
		if (N%factor == 0) {
			if (pow(factor, 2) < N)
				numberDiv += 2;
			else if (pow(factor, 2) == N)
				numberDiv += 1;
			else
				break;
		}
	}
	return numberDiv;
}

int numDiv2(int N) {
	int numberDiv = 2;
	// int M = pow(N, 0.5) + 1;
	for (int factor = 2; factor < N; factor++) {
		if (N%factor == 0) {
			if (pow(factor, 2) < N)
				numberDiv += 2;
			else if (pow(factor, 2) == N)
				numberDiv += 1;
			else
				break;
		}
	}
	return numberDiv;
}
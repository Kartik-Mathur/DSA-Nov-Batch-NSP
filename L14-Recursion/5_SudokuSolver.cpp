#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int mat[][9], int i, int j, int number, int n) {
	// i,j cell par number rakhna safe hai ya nhi batao
	for (int k = 0; k < n; ++k)
	{
		if (mat[i][k] == number or mat[k][j] == number) {
			return false;
		}
	}

	// 2. Check the same box
	n = sqrt(n);

	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int i = si; i < si + n; ++i)
	{
		for (int j = sj; j < sj + n; ++j)
		{
			if (mat[i][j] == number) return false;
		}
	}

	return true;
}

bool sudokuSolver(int mat[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		// Print the sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}

		return true;
	}

	// recursive case
	if (j == n) {
		return sudokuSolver(mat, i + 1, 0, n);
	}

	// Current cell already filled hai
	if (mat[i][j] != 0) {
		// Filled cell par jo bhi answer choti problem ka aaega wahi return kardo
		// Because already filled number change nhi kr skte
		return sudokuSolver(mat, i, j + 1, n);
	}

	// Current cell empty cell hai
	for (int number = 1; number <= n; ++number)
	{
		if (isSafe(mat, i, j, number, n) == true) {
			// Place the number
			mat[i][j] = number;
			bool kyaBakiSolveHua = sudokuSolver(mat, i, j + 1, n);
			if (kyaBakiSolveHua == true) {
				return true; // Sudoku solve ho gaya for i,j cell
			}
			mat[i][j] = 0; // Backtracking
		}
	}

	// Agar bahar aa gaye loop se matlab koi bhi [1,n] ka number place nhi ho paaya
	return false;
}

int main() {

	int mat[9][9] = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	sudokuSolver(mat, 0, 0, 9);

	return 0;
}

















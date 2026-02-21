#include <iostream>
using namespace std;

bool isSafe(int board[][100], int i, int j, int n) {
	int oi = i, oj = j;
	// Check current column
	for (int k = 0; k < i; ++k)
	{
		if (board[k][j] == 1) {
			return false;
		}
	}

	// Check upper right diagonal
	while (i >= 0 and j < n) {
		if (board[i][j] == 1) return false;
		i--;
		j++;
	}

	// Check upper left diagonal
	i = oi; j = oj;
	while (i >= 0 and j >= 0) {
		if (board[i][j]) return false;
		i--;
		j--;
	}

	// Upar teeno mei queen nhi hai toh current cell is safe
	return true;
}

bool nQueen(int board[][100], int i, int n) {
	// base case
	if (i == n) {
		// Iska mtlb hua that we have placed queens in N rows
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				// cout << board[i][j] << " ";
				cout << (board[i][j] == 1 ? 'Q' : '_') << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}

	// recursive case

	// Current row ke har column par queen rakh kar dekhenge
	for (int j = 0; j < n; ++j)
	{
		if (isSafe(board, i, j, n) == true) {
			board[i][j] = 1; // Place kardo i,j par queen ko agar safe hai current cell
			// Baaki n-1 queens recursion ko bolo place krne ke liye(ASSUMPTION)
			bool bakiQueenPlaceHui = nQueen(board, i + 1, n);
			if (bakiQueenPlaceHui) {
				return true;
			}

			board[i][j] = 0;// Backtracking
		}
	}

	// This means current row mei kahi bhi queen place nhi ho paai thus return false
	return false;
}

int main() {

	int board[100][100] = {0};
	int n;
	cin >> n;
	nQueen(board, 0, n);

	return 0;
}

















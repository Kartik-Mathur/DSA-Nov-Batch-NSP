#include <iostream>
using namespace std;

bool ratInMaze(char maze[][5], int i, int j, int n, int m, int sol[][5]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		// Print the solution
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		return false; // Fool the recursion
	}
	// recursive case
	// 1. Assume i,j ho skta hai solution ka part ho
	sol[i][j] = 1;

	// 2. Take a step right to see raasta milla
	if (j + 1 < m and maze[i][j + 1] != 'X') {
		bool rightSeBaatBani = ratInMaze(maze, i, j + 1, n, m, sol);
		if (rightSeBaatBani == true) {
			return true;
		}
	}

	// 3. Take a step down to see raasta milla
	if (i + 1 < n and maze[i + 1][j] != 'X') {
		bool downSeBaatBani = ratInMaze(maze, i + 1, j, n, m, sol);
		if (downSeBaatBani) {
			return true;
		}
	}

	// 4. Na right se Na Down se raasta milla toh means i,j can't be part of solution
	sol[i][j] = 0; // Backtracking
	return false;
}

int main() {

	char maze[][5] = {
		"0000",
		"00XX",
		"0000",
		"XX00",
	};

	int sol[5][5] = {0};

	ratInMaze(maze, 0, 0, 4, 4, sol);

	return 0;
}

















#include <iostream>
using namespace std;

bool ratInMazeAdvanced(char maze[][100], int i, int j, int n, int m, int sol[][100]) {
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
		sol[i][j] = 0; // Bactracking your base case too

		return false; // Fool the recursion
	}
	// recursive case
	// 1. Assume i,j ho skta hai solution ka part ho
	sol[i][j] = 1;

	// 2. Take a step right to see raasta milla
	if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j + 1] != 1) {
		bool rightSeBaatBani = ratInMazeAdvanced(maze, i, j + 1, n, m, sol);
		if (rightSeBaatBani == true) {
			return true;
		}
	}

	// 3. Take a step down to see raasta milla
	if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] != 1) {
		bool downSeBaatBani = ratInMazeAdvanced(maze, i + 1, j, n, m, sol);
		if (downSeBaatBani) {
			return true;
		}
	}

	// 4. Take left step to see raasta milla
	if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] != 1) {
		bool leftSeBaatBani = ratInMazeAdvanced(maze, i, j - 1, n, m, sol);
		if (leftSeBaatBani) return true;
	}

	// 5. Take up step to see raasta milla
	if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] != 1) {
		bool upSeBaatBani = ratInMazeAdvanced(maze, i - 1, j, n, m, sol);
		if (upSeBaatBani) return true;
	}

	// 6. Na right se Na Down se raasta milla toh means i,j can't be part of solution
	sol[i][j] = 0; // Backtracking
	return false;
}

int main() {

	char maze[][100] = {
		"0X000",
		"0X0X0",
		"0X0X0",
		"000X0",
	};

	int sol[100][100] = {0};

	ratInMazeAdvanced(maze, 0, 0, 4, 5, sol);

	return 0;
}

















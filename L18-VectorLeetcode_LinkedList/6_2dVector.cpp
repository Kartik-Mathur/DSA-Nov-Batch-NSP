#include <iostream>
#include <vector>
using namespace std;

int main() {
	int rows = 3, cols = 4;

	// vector <  vector<int>  > v(rows);
	// vector<int> v(n , buckets_value);
	vector <  vector<int>  > v(rows, vector<int> (cols , -1) );

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}





	return 0;
}

















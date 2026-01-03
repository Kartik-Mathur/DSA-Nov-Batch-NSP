#include <iostream>
using namespace std;

int main() {

	int n, N, i;
	cin >> n;

	for (N = 2; N <= n; ++N)
	{

		for (i = 2; i <= N - 1; ++i)
		{
			if (N % i == 0) {
				break;
			}
		}


		if (i == N) {
			cout << N << " ";
		}
	}



	return 0;
}

















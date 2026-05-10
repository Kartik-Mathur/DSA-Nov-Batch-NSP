#include <iostream>
using namespace std;

int topDown(string &a, int n, string &b, int m,int dp[][100]){
	// base case
	if(n == 0){
		return m;
	}
	if(m == 0){
		return n;
	}

	if(dp[n][m]!=-1){
		return dp[n][m];
	}

	// recursive case
	if(a[n-1] == b[m-1]){
		return dp[n][m]=topDown(a, n-1, b, m-1, dp);
	}
	else{
		int op1 = topDown(a,n-1,b,m, dp); // Deletion
		int op2 = topDown(a,n,b,m-1, dp); // Addition
		int op3 = topDown(a,n-1,b,m-1, dp); // Replace

		return dp[n][m]=1 + min(op1, min(op2,op3));
	}
}

int bottomUp(string &a, string &b){
	int dp[100][100];

	for (int i = 0; i <= a.size(); ++i)
	{
		for (int j = 0; j <= b.size(); ++j)
		{
			if(i == 0 and j == 0) dp[i][j] = 0;
			else if(i == 0) dp[i][j] = j;
			else if(j == 0) dp[i][j] = i;
			else{
				if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1];
				else{
					dp[i][j] = min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]))+1;
				}
			}
		}
	}


	return dp[a.size()][b.size()];
}

int main(){

	string a = "satur", b = "sun";
	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << topDown(a,a.size(),b,b.size(), dp) << endl;
	cout << bottomUp(a,b) << endl;


	return 0;
}

















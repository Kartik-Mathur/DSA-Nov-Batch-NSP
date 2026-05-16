#include <iostream>
using namespace std;

int topDown(int *price,int *weight,int capacity,int n,int dp[][100]){
	if(n == 0){
		return 0;
	}

	if(dp[n][capacity]!=-1){
		return dp[n][capacity];
	}

	// Chori krlo
	int op1=0,op2=0;
	if(capacity >= weight[n-1]){
		op1 = price[n-1] + topDown(price, weight, capacity- weight[n-1],n-1,dp);
	}
	// Chori mat kro
	op2 = 0 + topDown(price, weight, capacity, n-1,dp);

	return dp[n][capacity]=max(op1,op2);
}

int bottomUp(int *price,int *weight,int capacity,int n){
	int dp[100][100] = {};

	for (int N = 1; N <= n; ++N)
	{
		for(int c = 1; c <= capacity; c++){
			int op1 = 0,op2 = 0;
			if(c >= weight[N-1]){
				op1 = price[N-1] + dp[N-1][c - weight[N-1]];
			}
			op2 = dp[N-1][c];

			dp[N][c] = max(op1,op2);
		}
	}

	return dp[n][capacity];
}

int main(){


	int price[] = {5,3,4,2};
	int weight[] = {2,4,6,7};

	int n = sizeof(price)/sizeof(int);
	int dp[100][100];
	memset(dp, -1, sizeof(dp));

	cout << topDown(price, weight, 10, n,dp) << endl;
	cout << bottomUp(price, weight, 10, n) << endl;


	return 0;
}

















#include <iostream>
using namespace std;

int topDown(int amount, int *deno, int n,int *dp){
	if(amount == 0){
		return 0;
	}

	if(dp[amount] != -1){
		return dp[amount];
	}

	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(amount >= deno[i]){
			int ca = topDown(amount-deno[i], deno, n, dp);
			if(ca != INT_MAX){
				ans = min(ans, ca + 1);
			}
		}
	}

	return dp[amount] = ans;
}

int bottomUp(int amount,int *deno,int n){
	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = INT_MAX;
	}

	dp[0] = 0;
	for (int amt = 1; amt <= amount; ++amt)
	{
		int ans = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			if(amt >= deno[i]){
				int ca = dp[amt - deno[i]];
				if(ca != INT_MAX){
					ans = min(ans, ca + 1);
				}
			}
		}

		dp[amt] = ans;
	}

	return dp[amount];
}

int main(){

	int deno[] = {1, 7, 10};
	int n = sizeof(deno)/sizeof(int);

	int amount = 15;	
	int dp[100000];
	memset(dp, -1, sizeof(dp));

	cout << topDown(amount, deno, n, dp) << endl;
	cout << bottomUp(amount, deno, n) << endl;

	return 0;
}

















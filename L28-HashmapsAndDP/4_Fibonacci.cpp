#include <iostream>
using namespace std;

// int fibo(int n){
// 	if(n == 0 or n == 1){
// 		return n;
// 	}

// 	return fibo(n-1) + fibo(n-2);
// }

int topDown(int n,int *dp){
	if(n == 0 or n == 1){
		dp[n] = n; // Return se pehle store
		return n;
	}

	if(dp[n] != -1){ // Calculate karne se pehle check
		return dp[n];
	}

	int ans = topDown(n-1,dp) + topDown(n-2,dp);
	dp[n] = ans; // Store the answer, Return se pehle store 
	return ans;
}

int bottomUp(int n){
	int *dp = new int[n+1]; // nth index par nth fibonacci number store hoga
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i-1]+dp[i-2];
	}
	cout <<"\nBottom Up: ";
	// for (int i = 0; i <= n; ++i)
	// {
	// 	cout << dp[i] << " ";
	// }
	// cout << endl;

	return dp[n];
}

int main(){

	int n;
	cin>>n;

	int dp[10000];
	for (int i = 0; i < 10000; ++i)
	{
		dp[i] = -1;
	}

	// cout << topDown(n,dp) << endl;
	cout << topDown(n,dp) << endl;

	// for (int i = 0; i <= n; ++i)
	// {
	// 	cout << dp[i] << " ";
	// }
	// cout << endl;

	cout << bottomUp(n) << endl;

	return 0;
}

















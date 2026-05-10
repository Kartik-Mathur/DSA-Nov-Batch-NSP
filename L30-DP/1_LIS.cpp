#include <iostream>
#include <vector>
using namespace std;

void topDown(int *a,int n,int i,int *dp){
	// base case
	if(i == n){
		return ;
	}

	// recursive case
	for (int j = i-1; j >= 0; --j)
	{
		if(a[j] < a[i]){
			dp[i] = max(dp[i], dp[j]+1);
		}
	}

	topDown(a,n,i+1,dp);
}

int bottomUp(int *a,int n){
	int dp[1000];
	for (int i = 0; i < n; ++i)
	{
		dp[i] = 1;
	}

	for (int i = 1; i < n; ++i) // O(n^2)
	{
		for (int j = i-1; j >= 0; --j)
		{
			if(a[j] < a[i]){
				dp[i] = max(dp[i], dp[j]+1);
			}
		}
	}

	int lis_len = 1;
	for (int i = 0; i < n; ++i)
	{
		lis_len = max(lis_len, dp[i]);
	}

	return lis_len;
}

int lisLogN(int *a,int n){
	vector<int> v;

	v.push_back(a[0]);

	for (int i = 1; i < n; ++i)
	{
		if(v[v.size() - 1] < a[i]){
			v.push_back(a[i]);
		}
		else{
			int indx = upper_bound(v.begin(), v.end(), a[i]) - v.begin();
			v[indx] = a[i];
		}
	}

	return v.size();
}


int main(){

	int a[] = {10, 9, 3, 5, 4, 11, 7, 8};
	int n = sizeof(a)/sizeof(int);

	cout << bottomUp(a,n) << endl;

	int dp[10000];
	for (int i = 0; i < n; ++i)
	{
		dp[i] = 1;
	}

	topDown(a,n,1,dp);

	int lis_len = 1;
	for (int i = 0; i < n; ++i)
	{
		lis_len = max(lis_len, dp[i]);
	}

	cout << lis_len << endl;

	cout << lisLogN(a,n) << endl;

	return 0;
}

















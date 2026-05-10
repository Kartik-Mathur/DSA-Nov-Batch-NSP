#include <iostream>
using namespace std;

int lcs(string a,int n,string b,int m,int dp[][1000]){
	if(m == 0 or n == 0){
		return 0;
	}

	if(dp[n][m]!=-1){
		return dp[n][m];
	}

	if(a[n-1] == b[m-1]){
		return dp[n][m]=1 + lcs(a,n-1,b,m-1, dp);
	}
	else{
		int op1 = lcs(a,n-1,b,m, dp);
		int op2 = lcs(a,n,b,m-1, dp);

		return dp[n][m]=max(op1,op2);
	}
}

int bottomUp(string a,string b){
	int dp[1000][1000] = {};

	for (int i = 1; i <= a.size(); ++i)
	{
		for (int j = 1; j <= b.size(); ++j)
		{
			if(a[i-1] == b[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}

	// Print the LCS 
	string ans = "";
	int i = a.size(), j = b.size();
	while(i!=0 and j != 0){
		if(a[i-1] == b[j-1]){
			ans.push_back(a[i-1]);
			i--;
			j--;
		}
		else{
			if(dp[i-1][j] == dp[i][j]) i--;
			else j--;
		}
	}
	// reverse the answer
	reverse(ans.begin(), ans.end());
	cout << "LCS: "<<ans<<endl;
	return dp[a.size()][b.size()];
}



int main(){

	string a = "abcdgh";
	string b = "aedfhr";

	int dp[1000][1000];
	memset(dp, -1, sizeof(dp));

	cout << lcs(a,a.size(),b,b.size(), dp) << endl;
	cout << bottomUp(a,b) << endl;


	return 0;
}
















	
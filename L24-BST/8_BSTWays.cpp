#include <iostream>
using namespace std;


long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

long long catalan(int n) {
    long long fact2n = factorial(2 * n);
    long long factn = factorial(n);

    return fact2n / (factn * factn * (n + 1));
}

int ways(int n){
	if(n == 0){
		return 1;
	}

	int ans = 0;
	for (int i = 1; i <= n; ++i)
	{
		ans += ways(i-1)*ways(n-i);
	}

	return ans;
}

int main(){

	int n;
	cin>>n;


	cout <<catalan(n)<<endl;
	cout <<ways(n)<<endl;

	return 0;
}

















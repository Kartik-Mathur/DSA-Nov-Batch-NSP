#include <iostream>
using namespace std;

int main(){

	int a[] = {1, 2, 3, 4, 5, 5, 5, 6};
	int n = sizeof(a)/sizeof(int);

	int i = upper_bound(a,a+n,5) - a;
	cout << i << endl;

	i = lower_bound(a,a+n,5) - a;
	cout << i << endl;
	return 0;
}

















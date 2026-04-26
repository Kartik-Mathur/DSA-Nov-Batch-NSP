#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

int main(){

	unordered_map<string, vector<long long> > h;

	h["manish"].push_back(9999999999);
	h["manish"].push_back(8888888888);
	h["manish"].push_back(7777777777);
	
	h["ronak"].push_back(55555555555);
	h["ronak"].push_back(66666666666);
	h["prachi"].push_back(4444444444);

	for(auto p: h){
		cout << p.first << " : ";
		for(int i = 0 ; i < p.second.size(); i++){
			cout << p.second[i] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < h.bucket_count(); ++i)
	{
		cout << i << " : ";

		for(auto p = h.begin(i) ; p!=h.end(i) ; p++){
			cout << "("<<p->first <<": [";
			for(int i = 0 ; i < p->second.size(); i++){
				cout <<  p->second[i] << " ";
			}
			cout << "] )";
		}

		cout << endl;
	}


	return 0;
}

















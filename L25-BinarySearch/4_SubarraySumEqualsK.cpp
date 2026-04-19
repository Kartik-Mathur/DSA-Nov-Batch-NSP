class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int s = 0;
        int i = 0;
        int cnt = 0, n = a.size();

        for (int j = 0; j < n; ++j)
        {
        	s += a[j];

        	while(s > k and i<j){
        		s-=a[i];

        		i++;
        	}

        	if(s == k){
        		cnt++;
        	}
        }

        return cnt;
    }
};
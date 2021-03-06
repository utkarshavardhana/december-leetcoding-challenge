class Solution {
public:
    int smallestRangeII(vector<int>& A, int K) {
        if(A.size() == 1) return 0;
		int res = INT_MAX;
		int index = 0;
		vector<int> B;
		B = A;
		sort(B.begin(), B.end());
		for(int i=1; i<B.size(); i++){
			int MAX = max(B[i-1]+K, B.back()-K);
			int MIN = min(B[0]+K, B[i]-K);
			if(MAX-MIN < res){
				res = MAX-MIN;
				index = i;
			}
		}
		int a = INT_MAX, b = INT_MIN;
		for(int i=0; i<A.size(); i++){
			if(A[i] > b){
				b = A[i];
			}
			if(A[i] < a){
				a = A[i];
			}
		}
		res = min(res, b-a);
		return res;
    }
};

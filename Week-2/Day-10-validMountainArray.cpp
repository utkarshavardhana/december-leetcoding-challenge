class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() < 3)    return false;
        int pos = 0;
        for(int i=0; i<A.size()-1; i++) {
            if(A[i] == A[i+1])  return false;
            if(A[i] > A[i+1]) {
                if(i == 0)  return false;
                pos = i;
                break;
            }
        }
        for(int i=pos; i<A.size()-1; i++) {
            if(A[i] <= A[i+1])  return false;
        }
        return true;
    }
};

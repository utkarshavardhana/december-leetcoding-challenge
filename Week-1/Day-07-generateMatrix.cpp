class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top = 0, bottom = n-1, left = 0, right = n-1, count = 1;
        vector<vector<int>> res(n, vector<int>(n, 0));
        while(left <= right and top <= bottom) {
            for(int i=left; i<=right; i++)  res[top][i] = count++;
            top++;
            for(int i=top; i<=bottom; i++)  res[i][right] = count++;
            right--;
            for(int i=right; i>=left; i--)  res[bottom][i] = count++;
            bottom--;
            for(int i=bottom; i>=top; i--)  res[i][left] = count++;
            left++;
        }
        return res;
    }
};

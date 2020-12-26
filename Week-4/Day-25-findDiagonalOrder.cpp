class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty())  return res;
        vector<vector<int>> v(matrix.size()+matrix[0].size()-1);
        for(int i=0; i<matrix.size(); i++)
            for(int j=0; j<matrix[0].size(); j++)
                v[i+j].push_back(matrix[i][j]);
        for(int i=0; i<v.size(); i++)
            if(i%2 == 0) reverse(v[i].begin(), v[i].end());
        for(int i=0; i<v.size(); i++)
            for(auto it : v[i])
                res.push_back(it);
        return res;
    }
};

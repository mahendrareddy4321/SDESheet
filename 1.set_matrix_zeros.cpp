class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][0] == 0) col0 = 0;
            for (int j = 1; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for (int i = rows - 1; i >= 0; i--)
        {
            for (int j = cols - 1; j >= 1; j--)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            if (col0 == 0) matrix[i][0] = 0;
        }
        /*int n=m.size();
        int m1=m[0].size();
        multimap<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m1;j++)
            {
                if(m[i][j]==0)
                {
                    mp.insert({i,j});
                }
            }
        }
        for(auto it:mp)
        {
            int k=it.first,l=it.second;
            while(k>=0)
            {
                m[k][l]=0;
                k--;
            }
            k=it.first;
            while(l>=0)
            {
                m[k][l]=0;
                l--;
            }
            l=it.second;
            while(k<n)
            {
                m[k][l]=0;
                k++;
            }
            k=it.first;
            while(l<m1)
            {
                m[k][l]=0;
                l++;
            }
        }*/
    }
};

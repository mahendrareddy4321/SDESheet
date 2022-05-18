//1. prints n rows
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
	vector<vector<long long int>>r(n);
	for(int i=0;i<n;i++)
	{
		r[i].resize(i+1);
		r[i][0]=r[i][i]=1;
		for(int j=1;j<i;j++)
		{
			r[i][j]=r[i-1][j-1]+r[i-1][j];
		}
	}
	return r;
}
//2. print row and col ele
//ncr
//ans=(row-1)C(col-1);
int ncr(int n,int r)
{
  res=1;
  for(int i=0;i<r;i++)
  {
    res*=(n-i);
    res/=(i+1)
  }
  return res;
}
int f(int r,int c)
{
  return ncr(r-1,c-1);
}
//3. print row
//1)
class Solution{
public:
    ll ncr(int n,int k)
    {
        ll res=1;
        for(int i=0;i<k;i++)
        {
            res*=(n-i);
            res/=(i+1);
        }
        return res%1000000007;
    }
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<ll>ans(n);
        ans[0]=ans[n-1]=1;
        for(int i=1;i<n-1;i++)
        {
            ans[i]=ncr(n-1,i);
        }
        return ans;
    }
};
//2)
  vector<int> getRow(int n) {
        vector<int>v;
        long long c=1;
        for(int j=0;j<=n;j++)
        {
            v.push_back(c);
            c=c*(n-j)/(j+1);
        }
        return v;
    }

  

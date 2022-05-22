//clock-wise
void rotate(vector<vector<int> >& a)
{
    // Your code goes here
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(a[i].begin(),a[i].end());
    }
}    
/*anti-clockwise
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    int l=0,r=n-1;
    while(l<r)
    {
        swap(a[l][i],a[r][i]);
        l++;
        r--;
    }

class Solution{
public:
    int nextGap(int gap)
    {
        if (gap <= 1)
            return 0;
        return (gap / 2) + (gap % 2);
    }
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i, j, gap = n + m;
        for (gap = nextGap(gap);gap > 0; gap = nextGap(gap))
        {
            for (i = 0; i + gap < n; i++)
            {
                if (arr1[i] > arr1[i + gap])
                    swap(arr1[i], arr1[i + gap]);
            }
            for (j = gap > n ? gap - n : 0;i < n && j < m;i++, j++)
            {
                if (arr1[i] > arr2[j])
                    swap(arr1[i], arr2[j]);
            }
            if (j < m) 
            {
                for (j = 0; j + gap < m; j++)
                {
                    if (arr2[j] > arr2[j + gap])
                        swap(arr2[j], arr2[j + gap]);
                }
            }
        }
	}
};
//method 2 for m+n array return arr1
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        while(i<m&& j<n)
        {
            if(nums1[i]>nums2[j])
            {
                swap(nums1[i],nums2[j]);
                i++;
                sort(nums2.begin(),nums2.end());
            }
            else
            {
                i++;
            }
        }
        j=m;
        for(int i=0;i<n;i++)
        {
            nums1[j]=nums2[i];
            j++;
        }
    }
};

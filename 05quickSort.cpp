#include<bits/stdc++.h>
using namespace std;
class Solution 
{ 
    public:
    int partition(vector<int> &nums, int lo, int hi)
    {
        int pivot = nums[hi];
        int i = lo, j = lo;
        while(i <= hi)
        {
            if(nums[i] <= pivot)
            {
                if(i != j)
                    swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else i++;
        }
        return j-1;
    }
    void quickSort(vector<int> &nums, int lo, int hi)
    {
        if(lo >= hi)
            return;
        int pivot = nums[hi];
        int pi = partition(nums,lo,hi);
        quickSort(nums,lo,pi-1);
        quickSort(nums,pi+1,hi);       
    }
    
};
signed main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)cin >> nums[i];
    int k;
    cin >> k;
    Solution s;
    s.quickSort(nums,0,n-1);
    for(auto val: nums)
        cout << val << " ";

}
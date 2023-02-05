#include<bits/stdc++.h>
using namespace std;
class Solution 
{ 
    public:
    void insertionSort(int n, vector<int> &arr){
    for(int i = 1; i < n; i++)
    {
        int j = i-1, temp = arr[i];
        for(; j >= 0; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else break;
        }
        arr[j+1] = temp;
    }
}
};
signed main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)cin >> nums[i];
    Solution s;
    s.insertionSort(n,nums);
    for(auto val: nums)cout << val << " ";

}
#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i < n; i++)
    {
        bool swapped = false;
        for(int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)break;   //already sorted
    }
}

signed main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)cin >> nums[i];
    bubbleSort(nums,n);
    for(auto val: nums)cout << val << " ";
}

// O(N^2) algorithm used for sorting in which n-1 rounds are done in every round maximum
// number occupy last position.
// In i th round (n-i)th position is taken.

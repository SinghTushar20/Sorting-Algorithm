#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void merge(vector<int> &v, int strt, int end)
{
    int mid = strt+(end-strt)/2;
    int len1 = mid-strt+1;
    int len2 = end-mid;
    vector<int> first(len1);
    vector<int> second(len2);
    int index = strt;
    for(int i = 0; i < len1; i++)first[i] = v[index+i];
    index = mid+1;
    for(int i = 0; i < len2; i++)second[i] = v[index+i];

    //merge two sorted arrays
    int index1 = 0, index2 = 0;
    index = strt;
    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            v[index++] = first[index1++];
        }
        else 
        {
            v[index++] = second[index2++];
        }
    }
    while(index1 < len1)
    {
        v[index++] = first[index1++];
    }
    while(index2 < len2)
    {
        v[index++] = second[index2++];
    }
    
}
void mergeSort(vector<int> &v, int strt, int end)
{
    //base case
    if(strt >= end)return;
    int mid = strt + (end-strt)/2;

    // breaking left portion
    mergeSort(v,0,mid);

    //breaking right portion
    mergeSort(v,mid+1,end);

    //merge
    merge(v,strt,end);



}
signed main() {
    int n, x = 0;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    mergeSort(v,0,n-1);
    for(auto val: v)cout << val << " ";
    return 0;
}

/*Merge sort is simple divide and conquer technique for sorting array in which the 
is divided continously into two parts and further and then merged together in sorted 
order*/
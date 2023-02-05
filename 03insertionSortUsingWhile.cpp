#include<bits/stdc++.h>
using namespace std;
void insertionSort(int *arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int temp = arr[i], j  = i-1;
        while(j >= 0)
        {
            if(temp < arr[j])
            {
                arr[j+1] = arr[j];
                j--;
            }
            else break;
        }
        arr[j+1] = temp;
    }
}

signed main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++)cin >> arr[i];
    insertionSort(arr,n);
    for(int i = 0; i < n; i++)cout << arr[i] << " ";


}

/*I will start with first element from that particular element store it in temp variable
we will start moving left when we get any smaller element we will move it one position right
if no element is smaller we will break the loop and put temp at jth index*/

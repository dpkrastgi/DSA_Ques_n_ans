#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp; // temporary array
    int left = low;
    int right = mid + 1;

    // storing element int the temp array in a sorted manner
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // if elements on the right half are still right
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    // transfering all elements from temp to arr
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;                     // Base condition
    int mid = (low + high) / 2;     // Find mid of the array
    merge_sort(arr, low, mid);      // left half
    merge_sort(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);     // Merging sorted values
}

int main()
{
    vector<int> arr = {4, 7, 9, 3, 5, 6, 2, 4, 1};
    int n = 9;
    cout << "Before sorting array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    merge_sort(arr, 0, n - 1);

    cout << "After sorting array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
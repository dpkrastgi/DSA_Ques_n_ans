#include <bits/stdc++.h>
using namespace std;
void rev_arr(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    // Using single pointer
    swap(arr[i], arr[n - i - 1]);
    rev_arr(i + 1, arr, n);
}

int main()
{
    int n;
    cout << "Enter an input" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rev_arr(0, arr, n);
    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
        ;
    }

    return 0;
}
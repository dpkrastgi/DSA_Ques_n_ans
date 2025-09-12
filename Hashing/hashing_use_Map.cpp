#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input size
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    // map for hashing numbers
     map<int, int> mp;

    // // Unordered map for hashing numbers
    // unordered_map<int, int> mp;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    //Iterate in the map
    for (auto it : mp)
    {
        cout << it.first << "-->" << it.second << endl;
    }
    // queries
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--)
    {
        int num;
        cout << "Enter number to check frequency: ";
        cin >> num;
        cout << "Frequency of " << num << " is: " << mp[num] << endl;
    }

    return 0;
}

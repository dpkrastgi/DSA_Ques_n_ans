#include <bits/stdc++.h>
using namespace std;

int main() {
    // input string
    string s;
    cout << "Enter a string (no spaces): ";
    cin >> s;

    // hash array for 26 lowercase letters
    // int hash[26] = {0};

    //hash array for 256 ASCII
    int hash[256] = {0};

    // store frequencies
    for (int i = 0; i < s.size(); i++) {
        // hash[s[i] - 'a']++;
        hash[s[i]]++;
    }

    // queries
    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--) {
        char c;
        cout << "Enter character to check frequency: ";
        cin >> c;
        // cout << "Frequency of " << c << " is: " << hash[c - 'a'] << endl;
        cout << "Frequency of " << c << " is: " << hash[c] << endl;
    }

    return 0;
}

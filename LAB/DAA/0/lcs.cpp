#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;

    int n = a.size();
    int m = b.size();
    
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> choice(n + 1, vector<int>(m + 1, -1));

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                choice[i][j] = 2;
            } else {
                if (dp[i - 1][j] >= dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                    choice[i][j] = 0;
                } else {
                    dp[i][j] = dp[i][j - 1];
                    choice[i][j] = 1;
                }
            }
        }
    }

    string subsequence;
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (choice[i][j] == 2) {
            subsequence.push_back(a[i - 1]);
            i--;
            j--;
        } else if (choice[i][j] == 0) {
            i--;
        } else {
            j--;
        }
    }

    reverse(subsequence.begin(), subsequence.end());

    cout << "Longest common subsequence: " << subsequence << "\n";
}

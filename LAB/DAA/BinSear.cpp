#include <bits/stdc++.h>
using namespace std;

void find(int start, int end, int val, vector<int>& v) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (v[mid] == val) {
            cout << "Found " << val << " at index " << mid << endl;
            return;
        } else if (v[mid] > val) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout << "Value " << val << " not found in the array." << endl;
}

int main() {
    int n;
    cout<<"enter total num ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i]=i;
    }

    cout<<"enter number to find pos ";
    int p;
    cin >> p;
    find(0, n - 1, p, v);

    return 0;
}

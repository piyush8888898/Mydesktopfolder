#include <bits/stdc++.h>
using namespace std;

int makePar(vector<int>& vi, int l, int hi) {
    int pi = vi[hi];  
    int i = l - 1;  

    for (int j = l; j < hi; j++) {
        if (vi[j] <= pi) {
            i++;  
            swap(vi[i], vi[j]);  
        }
    }
    swap(vi[i + 1], vi[hi]);  
    return i + 1;  
}

void quickSort(vector<int>& vi, int l, int hi) {
    if (l < hi) {
        int pi = makePar(vi, l, hi);

        quickSort(vi, l, pi - 1);
        quickSort(vi, pi + 1, hi);
    }
}

int main() {
    int n;
    cout<<"Enter number of elements ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter numbers: ";

    for(int i=0;i<n;i++){
        cin>>v[i];

    }

    

    quickSort(v, 0, n - 1);

    cout << "Sorted viay: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}

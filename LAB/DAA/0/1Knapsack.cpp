#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int val, wt;
    
    Item(int v, int w) : val(v), wt(w) {}

    bool operator<(const Item& other) const {
        double r1 = (double)val / wt;
        double r2 = (double)other.val / other.wt;
        return r1 > r2;
    }
};

double fractionalKnapsack(int cap, vector<Item>& items) {
    sort(items.begin(), items.end());

    double totalVal = 0.0;

    for (const Item& it : items) {
        if (cap == 0)
            break;

        if (it.wt <= cap) {
            cap -= it.wt;
            totalVal += it.val;
        } else {
            totalVal += it.val * ((double)cap / it.wt);
            cap = 0;
        }
    }

    return totalVal;
}

int main() {
    int n, cap;

    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item> items;
    for (int i = 0; i < n; ++i) {
        int v, w;
        cout << "Enter value and weight of item " << i + 1 << ": ";
        cin >> v >> w;
        items.push_back(Item(v, w));
    }

    cout << "Enter the capacity of the knapsack: ";
    cin >> cap;

    cout << "Maximum value in Knapsack: " << fractionalKnapsack(cap, items) << endl; 
    return 0;
}

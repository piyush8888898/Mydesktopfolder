#include<bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
    Item(int v, int w) : value(v), weight(w) {}
};

// Comparator to sort items based on value-to-weight ratio
bool compare(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

int main(){
    int n, w;
    cout << "Enter number of items: ";
    cin >> n;
    cout << "Enter max weight: ";
    cin >> w;

    vector<int> val(n), wt(n);

    cout << "Enter values: ";
    for(int i = 0; i < n; i++) {
        cin >> val[i];
    }

    cout << "Enter weights: ";
    for(int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    // Create a list of items (value, weight)
    vector<Item> items;
    for(int i = 0; i < n; i++) {
        items.push_back(Item(val[i], wt[i]));
    }

    // Sort items based on value-to-weight ratio
    sort(items.begin(), items.end(), compare);

    double maxValue = 0.0;  // Total value in the knapsack

    // Iterate through sorted items and pick as much as we can
    for(int i = 0; i < n && w > 0; i++) {
        if(items[i].weight <= w) {
            // Take the whole item
            w -= items[i].weight;
            maxValue += items[i].value;
        } else {
            // Take fraction of the item
            maxValue += items[i].value * ((double) w / items[i].weight);
            w = 0;
        }
    }

    cout << "Maximum value in the knapsack: " << maxValue << endl;

    return 0;
}

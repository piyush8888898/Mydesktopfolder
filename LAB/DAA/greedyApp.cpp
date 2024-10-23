//rated hai kya??
// oy bhai!!
#include <bits/stdc++.h>
#include <iomanip>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <numeric>
#include <cmath>
using namespace std;

// Fast I/O
#define fast_io ios::sync_with_stdio(0); cin.tie(0);

// Type Definitions
#define int long long int
#define ll  long long 
#define vi  vector<int> 
#define vll  vector<long long> 
#define pii  pair<int, int> 
#define pll  pair<long long, long long> 

// Utility Macros
#define all(v) (v).begin(), (v).end()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define rrep(i, a, b) for (int i = (a); i >= (b); --i)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define in insert
#define sorta(arr,n) sort(arr, arr + n)
#define sortd(arr,n) sort(arr, arr + n, greater<int>())
#define sortva(ans) sort(ans.begin(), ans.end());
#define sortvd(ans) sort(ans.begin(), ans.end(), greater<int>());

// YES/NO Macros
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

// Constants
const int MOD = 1e9+7;

// Utility Functions
int findPower(int a, int b){
    int ans = 1;
    while(b > 0){
        if(b & 1) ans = (ans * 1LL * a) % MOD;
        a = (a * 1LL * a) % MOD;
        b >>= 1;
    }
    return ans;
}

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

bool desc(const pair<int, int>& a, const pair<int, int>& b) {
    return max(a.first, a.second) < max(b.first, b.second);
}

void printVec(vector<int> &ans){
    for(int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
    cout << endl;
}

// Lambda Function for Prime Check
auto isPrime = [](int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
};




signed main() {
    fast_io;
    int n;
    cout<<"Enter number of type of coins you have: ";
    cin>>n;
    vi v(n);
    cout<<"enter value of each coin: ";
    rep(i,0,n){
        cin>>v[i];
    }
    int k;
    cout<<"Enter the amount to return: ";
    cin>>k;
    sortvd(v);
    int i=0;
    while(k>0){
        
        vector<int> a;
        int p;
        int p=k/v[i];
        a.push_back(p);
        int rem=k%v[i];
        k%=v[i];
        i++;




    }
    

    return 0;
}
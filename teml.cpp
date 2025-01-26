#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <set>
#include <algorithm>
#include <utility>
#include <map>
#include <unordered_map>
#include <queue>
#include <cmath>
#include <stack>
#include <numeric>
#include <bitset>
#include <sstream>
#include <deque>
#include <functional>
#include <complex>
#include <unordered_set>
#include <random>

using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define ll long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(x) (int)x.size()
#define endl '\n'

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> hp(n);

    for(int i=0;i<n;i++) cin>>hp[i];

    sort(all(hp));

    int mini=0;
    for(int i=0;i<n;i++)
    {
        int curr=hp[i]+(n-i-1)*x;
        mini=max(mini,curr);
    }

    cout<<mini<<endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}
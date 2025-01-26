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


void reverseArr(vector<int>& arr,int i) 
{
    int n=arr.size();
    if(i>=n/2) return;
    
    swap(arr[i],arr[n-i-1]);
    reverseArr(arr,i+1);
    

    return;
}
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // vector<int> b(n);
    reverseArr(a,0);

    for(auto i:a) cout<<i<<" ";
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
 
    while (t--) {
        solve();
    }
}
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

void genSubs(int idx,vector<int>& nums,vector<int>& temp,vector< vector<int> >& res) {
    if(idx >= nums.size()) {
        res.push_back(temp);
        return;
    }
    temp.push_back(nums[idx]);
    genSubs(idx+1,nums,temp,res);
    temp.pop_back();
    genSubs(idx+1,nums,temp,res); 
}

void solve() {
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int k;
    cin>>k;
    vector<int> temp;
    vector< vector<int> > res;
    genSubs(0,nums,temp,res);
    cout<<"Subsets are: "<<endl;
    for(auto x: res) {
        int sum=accumulate(x.begin(),x.end(),0);
        if(sum == k) {
            for(auto y: x) {
                cout << y << " ";
            }
            cout << endl;
        }
    }
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
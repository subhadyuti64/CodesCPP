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
 

bool is_upper(char ch)
{
    if(ch>=65 && ch<=90) return true;
}
void solve() {
    string s1,ans="";
    cin>>s1;
    
    int n=s1.length(),f=1;
    for(int i=1;i<n;i++)
    {
        if(!is_upper(s1[i]))
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        for(int i=0;i<n;i++) ans+=s1[i];
    }
    else ans=s1;

    cout<<ans<<endl;
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
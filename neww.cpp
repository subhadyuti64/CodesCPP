#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i=0; i<n;i++) {
            cin >> arr[i];
        }
        bool temp= false;
        vector<int>ans;
        int cntsub=1<<n; 
        for (int z=1; z<cntsub;z++) { 
            int currAnd=-1;
            vector<int>ind;

            for (int i=0;i<n;i++) {
                if (z&(1<<i)) { 
                    ind.push_back(i+1); 
                    if (currAnd==-1) {
                        currAnd=arr[i]; 
                    } else {
                        currAnd&=arr[i]; 
                    }
                }
            }

            if (currAnd==n) { 
                ans=ind;
                temp=true;
                break;
            }
        }

        if (temp) {
            cout << "YES"<<endl;
            cout <<ans.size() << endl;
            for (int idx:ans) {
                cout<<idx<< " ";
            }
            cout<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}

int main() {
    solve();
    return 0;
}

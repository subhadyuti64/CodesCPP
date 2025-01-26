#include <iostream>
#include <vector>
using namespace std;

void calcSubset(vector<int>& A,vector<int>& subset, int index, int &check,int k)
{
    int hh=1;
    for(auto f:subset)
    {
        hh=f & hh;
    }
    if(k==hh)
    {
        cout<<"YES"<<endl;
        cout<<subset.size()<<endl;
        for(auto temp:subset) cout<<temp<<" ";
        check==-1;
        return;
    }
    for (int i = index; i < A.size(); i++) {
        subset.push_back(A[i]);
        calcSubset(A, subset, i + 1,check,k);
        subset.pop_back();
    }
}



// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,check=0;
        cin>>n>>k;
        vector<int> A(n);
        vector<int> subset;
        for(int i=0;i<n;i++) cin>>A[i];
        calcSubset(A,subset,0,check,k);
        if(check==0) cout<<"NO"<<endl;
    }
    return 0;
}
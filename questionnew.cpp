#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // Given->vector of integers and a target sum.

    // To find two elements in the vector that add up to the target sum.(No repeating elements)
    vector<int> v;
    for(int i=1;i<=5;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }

    int target;
    cin>>target;
    int f=0;
    for(auto i:v)
    {
        if(find(v.begin(),v.end(),target-i)==v.end()) f=0;
        else if(find(v.begin(),v.end(),target-i)!=v.end() && target-i!=i) 
        {
            f=1;
            break;
        }
    }
    if(f==0) cout<<"No two elements found that add up to the target sum.";
    else cout<<"Two elements found that add up to the target sum.";
}
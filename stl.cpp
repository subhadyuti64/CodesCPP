#include<iostream>
#include<vector>
using namespace std;

int main()
{
     vector<int> a;
     int n;
     cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    vector<int>:: iterator i;

    for(i=a.begin();i<a.end();++i)
    {
        cout<<*(i)<<" ";
    }
}
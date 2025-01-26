#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
    // Types of Initialisation
    // Type 1:
    pair<int,string> p;
    p=make_pair(3,"Subha");

    // Type 2:
    pair<int,string> p1(5,"Satyam");

    cout<<p.first<<" "<<p.second<<endl;
    cout<<p1.first<<" "<<p1.second<<endl;

    // vector< pair<int,string> > v;

    // v.push_back(p);
    // v.push_back(p1);

    

    // swap()

    // p.swap(p1);
    // cout<<p.first<<" "<<p.second<<endl;
    // cout<<p1.first<<" "<<p1.second<<endl;



}
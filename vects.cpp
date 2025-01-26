#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<numeric>
#include<utility>
using namespace std;
int main()
{
    // INITIALISATION AND INSERTION
    list<int> v(3,10); // 3 elements with value 10
    v.push_back(1);
    v.push_back(5);
    // vector<int> v;

    // v.push_back(1);
    // int l=v.size();
    // int c=v.capacity();
    // cout<<l<<" "<<c<<endl;
    
    // l=v.size();
    // c=v.capacity();
    // cout<<l<<" "<<c<<endl;
    // v.push_back(6);
    // l=v.size();
    // c=v.capacity();
    // cout<<l<<" "<<c<<endl;
    // v.push_back(8);
    // l=v.size();
    // c=v.capacity();
    // cout<<l<<" "<<c<<endl;
    

    // 10 10 10 5 6

    // v.push_back(8);-> used for an exisiting object
    // v.emplace_back(9);
    // for(auto i:v) cout<<i<<" ";

    //COPYING
    // vector<int> v2(v);
    

    // v.pop_back();

    // for(auto i:v) cout<<i<<" ";

    // FOR LISTS
    v.push_front(3);
    v.push_front(7);




    // INDEXING
    // cout<<v.at(3)<<endl;
    // cout<<v[3]<<endl;



    // SIZE AND CAPACITY
    // int l=v.size();
    



    // DELETION
    // v.erase(iterator);
    // auto initial=v.begin();
    // initial=next(initial,3);
    // v.insert(initial,9);
    
    // v.empty();
    

    // TRAVERSAL

    // vector<int> :: iterator it=v.begin();
    // auto it=v.begin();

    // for(;it!=v.end();it++) cout<<*(it)<<" ";


    // vector<int> :: reverse_iterator it=v.rbegin();
    // for(;it!=v.rend();it++) cout<<*(it)<<" ";


    for(auto i:v) cout<<i<<" ";
    


    // vector<int> v;
    // for(int i=0;i<5;i++) v.push_back(i+1);
    // int sum=0;
    // for(auto i:v) 
    // {
    //     cout<<i<<" ";
    //     sum=sum+i;
    // }
    // cout<<endl;
    // cout<<"SUM: "<<sum<<endl;

    // double avg=sum/5;
    // cout<<"Average: "<<avg<<endl;
    // cout<<endl;
    // cout<<"REVERSE: ";
    // for(auto i=v.rbegin();i!=v.rend();i++) cout<<*(i)<<" ";

    // reverse(v.begin(),v.end());
    // for(auto i:v) cout<<i<<" ";


    // reverse(v.begin(),v.end());




    // 2D-Vector
    // vector< vector<int> > v;
    // vector<int> v1,v2;

    // v1.push_back(10);
    // v1.push_back(11);
    // v1.push_back(12);

    // v2.push_back(15);
    // v2.push_back(16);
    // v2.push_back(17);

    // v.push_back(v1);
    // v.push_back(v2);

    

    // for(auto i:v) 
    // {
    //     for(auto j:i) cout<<j<<" ";
    //     cout<<endl;
    // }
    

    
    
    

}


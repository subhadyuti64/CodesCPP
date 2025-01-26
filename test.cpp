#include <iostream>
#include <vector>
using namespace std;


int main() 
{
    int T;
    cin>>T; 

    while (T--) {
        int N, K;
        cin>>N>>K;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin>>arr[i];
        }

        bool found = false;
        vector<int> resultIndices;

        int totalSubsets= 1<<N; 
        for (int f=1; f<totalSubsets; f++)
        {

            int currentAnd = -1;
            vector<int> indices;

            for (int i = 0; i<N ; i++) 
            {
                if (f & (1<<i)) { 
                    indices.push_back(i + 1); 
                    if (currentAnd== -1) {
                        currentAnd = arr[i];
                    } else {
                        currentAnd &= arr[i]; 
                    }
                }
            }

            if (currentAnd == K) 
            { 
                resultIndices = indices;
                found = true;
                break;
            }
        }

        if (found) 
        {
            cout<<"YES"<<endl;
            cout<<resultIndices.size()<<endl;
            for (int idx : resultIndices) 
            {
                cout<<idx<<" ";
            }
            cout<<endl;
        } else 
        {
            cout<<"NO"<<endl;
        }
    }
}

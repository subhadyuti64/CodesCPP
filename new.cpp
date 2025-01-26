#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countDivisibleTriplets(int n, int d, vector<int> &arr) {
    int count = 0;

    
    for (int i = 0; i < n; i++) {
        
        unordered_map<int, int> rCount;
        for (int j = i + 1; j < n; j++) {
            int rR = (d - (arr[i] % d + arr[j] % d) % d) % d;

            if (rCount.find(rR) != rCount.end()) {
                count += rCount[rR];
            }
            int current = arr[j] % d;
            rCount[current]++;
        }
    }
    return count;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = countDivisibleTriplets(n, d, arr);
    cout << result << endl;

    return 0;
}
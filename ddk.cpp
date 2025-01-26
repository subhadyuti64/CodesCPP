#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if the absolute difference between consecutive digits is 1
bool hasConsecutiveDigitDifferenceOne(int num) {
    string strNum = to_string(num);
    int l=strNum.length();
    for (int i=0;i<l-1;i++) {
        if (abs(strNum[i] - strNum[i + 1]) != 1) {
            return false; // If the difference is not 1, return false
        }
    }
    return true; // All consecutive digits have a difference of 1
}

// Function to find all numbers between a and b whose digits have a difference of 1
vector<int> findNumbersWithDigitDifferenceOne(int a, int b) {
    vector<int> result;
    for (int i = a; i <= b; i++) {
        if (hasConsecutiveDigitDifferenceOne(i)) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int a,b;
    cin>>a>>b;

    vector<int> result = findNumbersWithDigitDifferenceOne(a, b);
    
    // Output the result
    cout << "Numbers between " << a << " and " << b << " with digit differences of 1: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
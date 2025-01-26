#include <iostream>
#include <vector>
#include <string>

using namespace std; 

class Example {
public:
    Example(int a,string b) {
        cout << "Constructed Example with " << a << " and " << b <<endl;
    }
};

int main() {
    vector<Example> v;

    Example obj(42, "hello");
    v.push_back(obj);

    
    v.emplace_back(7, "world");

}

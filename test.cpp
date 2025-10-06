#include <iostream>
#include <vector>
#include <algorithm>
#include "mylib.hpp"

using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    read(v);
    print(v);
    read(v);
    print(v);
    
    return 0;
}
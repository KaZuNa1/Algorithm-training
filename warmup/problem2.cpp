#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string original;
    cin>>original;

    for (auto it = original.rbegin(); it != original.rend(); ++it) {
        cout<<*it;        
    }

    
    return 0;
}
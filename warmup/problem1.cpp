#include <iostream>
#include <vector>
#include <algorithm>
#include "../mylib.hpp"

using namespace std;

int main() {
    vector<int> array;
    read(array);
    int max=array[0];
    for (auto i : array) {
        if(i > max)
        max = i;
    }
    cout<<max;
    return 0;
}
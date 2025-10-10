#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int count=0;
    for (auto i : s) {
        if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
        count++;
    }
    cout<<count;
    return 0;
}
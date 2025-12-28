#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int sum=0,n;
    cin>>n;
    while (n>0) {
        sum+=(n%10);
        n/=10;

    }
    cout<<sum;
    return 0;
}






#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    string str = to_string(n);
    for (auto i : str) {
        sum+=i-'0';
    }
    cout<<sum;
    return 0;
}
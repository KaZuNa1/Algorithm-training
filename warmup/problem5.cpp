#include <iostream>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<"its not prime";
    }
    else if(n==2||n==3){
            cout<<"its prime";
        }
    else if(n%2!=0){
        bool isPrime = true;
        for (int i = 3; i <= sqrt(n); i++) {
            if(n%i==0){
                cout<<"not prime";
               isPrime = false;
                break;
            }
        }
       if(isPrime) cout<<"its prime";
    }
    else {
        cout<<"its not prime";
    }
    
    return 0;
}
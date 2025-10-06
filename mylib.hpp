#pragma once
#include <bits/stdc++.h>
using namespace std;

// ====== Input/Output Helpers ======
void read(vector<int>& arr) {
    for (int& x : arr) cin >> x;
}

void print(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << '\n';
}

// ====== Math Helpers ======
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

// ====== Other Useful ======
template<typename T>
T maxElement(const vector<T>& arr) {
    return *max_element(arr.begin(), arr.end());
}

template<typename T>
T minElement(const vector<T>& arr) {
    return *min_element(arr.begin(), arr.end());
}

#pragma once
#include <bits/stdc++.h>
using namespace std;

// ====== Input/Output Helpers ======
void read(vector<int>& arr) {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    arr.resize(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
}

// ⚡ Version 2 — uses given size, no prompt
void read(vector<int>& arr, int n) {
    arr.resize(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
}
void loop(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
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
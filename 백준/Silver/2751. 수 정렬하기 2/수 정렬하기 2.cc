#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int &x : arr) cin >> x;
    
    sort(arr.begin(), arr.end()); // 가장 빠른 정렬

    for (int x : arr) cout << x << '\n';
}
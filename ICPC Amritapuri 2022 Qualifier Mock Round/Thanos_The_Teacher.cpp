#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> l(2*n);
        for(int i = 0; i < 2*n; i++) {
            cin >> l[i];
        }
        sort(l.begin(), l.end());
        int sum = l[0] + l[2*n-1];
        bool balanced = true;
        for(int i = 1; i < n; i++) {
            if(l[i] + l[2*n-i-1] != sum) {
                balanced = false;
                break;
            }
        }
        if(balanced) {
            cout << "PERFECT\n";
        } else {
            cout << "IMBALANCED\n";
        }
    }
    return 0;
}

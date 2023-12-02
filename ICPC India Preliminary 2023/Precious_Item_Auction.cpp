#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for (auto& val : arr) cin >> val;
        sort(arr.begin(), arr.end());

        long long minimum_sum = arr[n - k - 1] + accumulate(arr.begin(), arr.begin() + k - 1, 0LL);

        long long maximum_sum = 0;
        long long i = n - 2;
        while (i >= 0 && k > 0) {
            maximum_sum += arr[i];
            i -= 2;
            k--;
        }

        cout << minimum_sum << " " << maximum_sum << endl;
    }

    return 0;
}

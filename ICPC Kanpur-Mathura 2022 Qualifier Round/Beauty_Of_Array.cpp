/*
The beauty value of an array is the XOR of two numbers M1 and M2 where M1 is the smallest number and M2 is the second smallest number of the array.

Now, you are given an array A of N numbers. You need to find the sum of the beauty values for all the subarrays of A which contains at least two numbers. A[i, i+1, …, j-1, j] and A[k, k+1, …, l-1, l] are two different subarrays of A if i != k or j != l.

Input
The first line of the input will contain an integer T (T ≤ 100) which denotes the number of test cases.

First line of each test case will have an integer N (2 ≤ N ≤ 103). The next line will contain N integers separated by a single space. These N numbers are the elements of the described array A (1 <= Ai <= 109).

Output
For each test case, you need to print one integer which is the sum of the beauty values for all the subarrays of A.

Sample Input
2
3
1 2 3
4
1 2 3 4 
Sample Output
7
18
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int m1 = a[i], m2 = INT_MAX;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < m1) {
                    m2 = m1;
                    m1 = a[j];
                } else if (a[j] < m2) {
                    m2 = a[j];
                }
                ans += m1 ^ m2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

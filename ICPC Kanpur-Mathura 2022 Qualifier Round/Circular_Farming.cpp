/*
You are given a rectangular farming land on a 2D plane containing some trees and a special non-movable farming device on position (Dx, Dy). You want to draw some good circles around this device. A circle is called good if its radius is integer and it doesn't intersect with any tree. So for any tree, it should be either totally inside the circle or outside of the circle.It is also possible for a good circle to touch the trees. Now you have to output how many good circles you can draw where the device is positioned at the center of the circles.

Input
The first line of the input gives the number of cases, T. Each test case starts with a line containing two points, the upper left (ULx, ULy) and lower right (LRx, LRy) corner of the farming land. The next line contains the device position (Dx, Dy) and the number of trees in the field N. Each next N line contains the tree coordinate (Xi, Yi) and radius Ri.

Output
Print the possible number of complete crop rings generated using the device for each test case. See the sample outputs for the exact format.

Constraints
1 ≤ T ≤ 5
1 ≤ N ≤ 100000
0 ≤ |Every coordinate points| ≤ 12000
0 < Ri ≤ 1000.0
Trees can touch and overlap with each other for their different height levels.
The farming land is axis parallel and all coordinate points are integer.
Only the radius of the trees will be given as floating point numbers and all other coordinates will be given as integers.
Sample Input
1
0 5 8 0
4 2 4
2 4 0.8
1 1 0.5
7 2 1.0
7 1 0.5
Sample Output
Case 1: 2
Explanation of sample test case:
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef vector<pl> vpl;
 

void solve(){
    int ux, uy, lx, ly, dx, dy, n;
    cin>>ux>>uy>>lx>>ly>>dx>>dy>>n;
    int p = min({abs(dx-ux), abs(lx-dx), abs(dy-uy), abs(dy-ly)});
    vector<int> f(p+2);
    for(int i = 0; i < n; i++){
        int x,y;
        double r;
        cin>>x>>y>>r;
        double d = sqrt((dx-x)*(dx-x)+(dy-y)*(dy-y));
        double mnd = max(0.0, d - r);
        double mxd = d + r;
        for(int j = ceil(mnd); j <= p && j <= mxd; j++){
            f[j] += 1;
        }
    }
    int cnt = 0;
    for(int i = 0; i <= p; i++){
        if(f[i] == 0){
            cnt++;
        }
    }
    cout << cnt << "\n";

}

int main(){
    int T=1, TT = 1;
    cin>>T;
    while(T--){
        cout << "Case " << TT++ << ": ";
        solve();
    }
    return 0;
}
// Do this code but wrong ans 

/*There are N students in a classroom having M chocolates each. Find the total number of chocolates present in the classroom.

Input Format
The first line contains two integers N and M denoting the total number of students and amount of chocolates each student have respectively.
Output Format
Print a single integer denoting the total number of chocolates present in the classroom.

Constraints

1 <= N, M <= 104

Sample 0
Input

2 6

Output

12

Explanation
For the first test case there are 2 students with 6 chocolates each. So the total number of chocolates in the classroom is 2 * 6 = 12.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    
        cin>>n>>m;
		cout<<m*n<<endl;
 
    return 0;
}

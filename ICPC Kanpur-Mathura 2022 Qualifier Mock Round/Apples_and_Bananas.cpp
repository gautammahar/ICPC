/*You have a apples and b bananas, you wonder how many fruits you have in total.

Input
The first line has two space separated numbers: a and b
Output
Output a single line containing the total number of fruits you have
Constraints
1 <= a <= 100
1 <= b <= 100
Sample
Input
25 30
Output
55
Explanation
Sum of 25 and 30 is 55 hence total fruits 55.*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin >> a;
	cin >> b;
	cout << a+b;
}

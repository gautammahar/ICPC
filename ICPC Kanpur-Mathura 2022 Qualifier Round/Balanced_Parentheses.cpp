/*
A balanced parentheses sequence is a sequence of parentheses such that each opening parenthesis has a matching closing parenthesis and the pairs of parentheses are properly nested. In other words, a balanced parentheses sequence must satisfy the following conditions:

The sequence is empty, or The sequence is of the form "(S)", where S is a balanced parentheses sequence, or The sequence is of the form "S1S2", where S1 and S2 are balanced parentheses sequences. For example, the following are balanced parentheses sequences:

""
"()"
"((()))"
"()()()"
"(()(()))"

And the following are not balanced parentheses sequences:

"("
")"
"()("
"(()"
"(()))"
"())("

Now, you are given two integers, A and B where A denotes the number of opening brackets i.e: ( and B denotes the number of closing brackets i.e: ). You need to report if you can build a balanced parentheses using all of those brackets.

Input
The first line of the input will contain an integer T (T ≤ 105) which denotes the number of test cases.

Each of the next T lines contains two integers A and B (0 ≤ A, B ≤ 109) describing a single test case.

Output
For each test case, print "YES" (without quotes) if you can build a balanced parentheses using the given brackets, otherwise print "NO" (without quotes).

Sample Input
2
2 1
10 10
Sample Output
NO
YES
*/

#include<iostream>

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x;
 	
	cin>>t;

	while(t--){
		cin>>n>>x;
		if(n==x) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
}

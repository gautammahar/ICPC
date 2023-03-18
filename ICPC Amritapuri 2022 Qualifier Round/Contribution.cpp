/*
You are given two strings - U (representing upvotes) and D (representing downvotes) of length 5 each, containing the digits 1, 3, 5, 7. Each digit represents the reputation of a coder. For example, 5 represents a 5-dan coder.

Based on the reputation of the coder, their vote has a certain contribution value for upvote and downvote.

1 dan coder: +1 / -1
3 dan coder: +4 / -4
5 dan coder: +6 / -6
7 dan coder: +9 / -9
Find the total contribution on the blog.

Input Format
The first line contains a single integer T denoting the number of test cases.
Each testcase contains two lines, first line denotes the upvotes U, second line denotes the downvotes D.
Output Format
For every test case, print the total contribution in a new line.

Constraints
1 <= T <= 100
|U| = 5
|D| = 5
Sample 0
Input
2
33113
73777
77537
51773
Output
-26
8
Explanation
In the first testcase, the upvote values are: 4, 4, 1, 1 and 4. The downvote values are -9, -4, -9, -9 and -9. Hence, the answer is (4 + 4 + 1 + 1 + 4) - (9 + 4 + 9 + 9 + 9) = -26.
Similarly, for the second testcase, the answer is (9 + 9 + 6 + 4 + 9) - (6 + 1 + 9 + 9 + 4) = 8.
*/

#include <iostream>
using namespace std;

int contribution(char c) {
    if (c == '1') return 1;
    if (c == '3') return 4;
    if (c == '5') return 6;
    if (c == '7') return 9;
    return 0; 
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string U, D;
        cin >> U >> D;

        int upvotes = 0, downvotes = 0;
        for (char c : U) upvotes += contribution(c);
        for (char c : D) downvotes += contribution(c);

        cout << upvotes - downvotes << endl;
    }
    return 0;
}

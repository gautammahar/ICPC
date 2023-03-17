/*
Congratulations on getting selected into Amritapuri ICPC onsite regional. Now, it's time for you to solve one of the major dilemmas faced by the regional directors each year.

Amritapuri regional hosts ICPC regionals at two sites, Bengaluru and Amritapuri. The Amritapuri site has seats for a total of X teams, whereas the Bengaluru site has Y seats.

A total of N teams have been extended an invitation to participate in the onsite regional contest after qualifying from the online contests. To get the seat on on-site sites, these teams would have to give their site preferences.

Each team can give preferences in the following ways.

Can attend only the Amritapuri site. (denoted as "A" in the input)
Can attend only the Bengaluru site. (denotes as "B" in the input)
Can attend both the sites. (denotes as "C" in the input)

The regional director is interested in inviting as many teams as possible for the onsite regionals while also making sure that the logistic concerns are respected as well (i.e. Amritapuri having a maximum of X seats, whereas Bengaluru of Y).

Find the maximum value of the total number of teams that can attend onsite regionals.

Constraints
1 ≤ T ≤ 100
1 ≤ X, Y ≤ 100
1 ≤ N ≤ 200

Input
First line contains T, the number of test cases.
Then test cases follow. For each test case,
The first line consists of three space-separated integers N X Y as mentioned in the statement.
The second line consists a string of length N denoting the preferences of the competitors.
Output
For each test case, output a single line consisting of an integer corresponding to the maximum possible number of teams that can attend the onsite competition.

Sample
Input
3
5 2 3
AAABB
5 3 2
AAABB
5 2 3
AACBB
Output
4
5
5

Explanation
Test case 1. Three teams with a preference for Amritapuri, and two for Bengaluru. Amritapuri site has only two seats, whereas Bengaluru has two. You can see that a maximum total of four teams can be selected, two for Amritapuri and two for Bengaluru.
Test case 2. You can easily see that all the team's preferences can be accommodated.
Test case 3. Here also, preferences of all teams can be allocated. The third team can be allocated to the Bengaluru site.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        string prefs;
        cin >> prefs;

        int countA = 0, countB = 0, countC = 0;

        for (char c : prefs) {
            if (c == 'A') {
                countA++;
            } else if (c == 'B') {
                countB++;
            } else {
                countC++;
            }
        }

        int maxA = min(x, countA);
        int maxB = min(y, countB);
        int maxC = min(max(x+y-maxA-maxB, 0), countC);

        cout << maxA + maxB + maxC << endl;
    }

    return 0;
}

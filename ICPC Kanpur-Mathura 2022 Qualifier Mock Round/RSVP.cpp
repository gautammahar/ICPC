/*Anamika is getting married, and she invited many of her friends to be by her side on her big day. A few days have passed since the invitations went out and all of her friends replied as to if they are coming or not; and if they are coming, whether or not they are bringing any friends of their own with them; and if they are bringing their own friends, who they are bringing.

You are in charge of managing the party, and need to count how many guests will be coming from the invitations sent by Anamika.

Input
The first line of input contains an integer T, denoting the number of test cases.
For each test case,
the first line contains an integer n denoting the number of invitations Anamika sent out.
n lines follow. In each line, reply of a friend is described.
The lines start with the invited friend's name, followed by a response which is either "yes" or "no" without the quotes.
If the response is "yes", an integer k follows denoting the number of guests, the invited friend will be bringing.
Then k strings follow in the same line, denoting the names of the guests, the invited friend will be bringing with them.
Constraints
1 <= T <= 50.
1 <= n <= 10000.
0 <= k <= 10000.
Sum of k over all invited friends per test case <= 10000.
Names consist of only lowercase English alphabets, with length no more than 7.
You can assume that there will be no conflicting statements in the input.
You can assume that an invited friend will not have themselves in their list of their own guests.
You can assume that each person has a unique name.
Output
For each test case, output an integer in a single line denoting the number of guests who will be present in Anamika's wedding ceremony. Please check the samples for details.

Sample I/O
Input
1
3
ana yes 0
kaniz no
shukti yes 1 saif
Output
3
Explanation
In test case 1, kaniz won't be coming. ana, shukti and saif will be coming.*/

#include <iostream>
#include <string>
#include<set>
using namespace std;

int main() {
    int t;
    cin >> t;
    int sum;
    while (t--) {
        int n;
        sum = 0;
        cin >> n;
		set<string> st;
        while (n--) {
			
            string name, reply;
            cin >> name >> reply;
			
            if (reply == "yes") {
				st.insert(name);
                sum++;
                int k;
                cin >> k;
                sum = sum + k;
                while (k--) {
                    string guest;
                    cin >> guest;
					st.insert(guest);
                }
            
            }
        	
        }
		cout << st.size()<<endl;
    }
    return 0;
}

/*
Jay has found himself in a predicament: his train is being eaten by Jeff, the 600-foot worm that roams the E, F and R subway lines!

The train consists of several cars. Jay can move to the next or previous car in one minute. However, he can only move to a car if it is empty. Some cars are full of debris and need to be cleared before Jay can move to them.

Meanwhile, Jeff is eating the train from back to front. To escape, Jay needs to reach the frontmost car before being eaten by Jeff. Can Jay make it in time?

The train consists of n cars, numbered 1 to n from back to front. Thus, car n is the frontmost car. Each car is either empty or full of debris. Jay is initially at car j, which is empty.

Meanwhile, Jeff the worm is eating the cars from back to front, starting from car 1 all the way to car n. He eats one car per minute. If Jeff eats the car Jay is on, then Jay is eaten as well.

Every minute, Jay can perform one action before Jeff eats a car. Jay can do one of three kinds of actions:

Move to the next car. This is only possible if the said car still exists and is empty.
Move to the previous car. This is only possible if the said car still exists and is empty.
Clear the next and previous cars of debris. This turns them into empty cars.

Can Jay reach car n before being eaten by Jeff?

Input Format
The first line of input contains an integer t, the number of test cases.
The following lines describe the test cases. For each test case:
The first line of each test case contains two space-separated integers n and j.
The second line contains a string S of length n describing the train from back to front.
If the ith character of S is a . (a dot), then car i is empty, and
if the ith character of S is a # (sharp), then car i is full of debris.

Constraints
1 ≤ t ≤ 5000
2 ≤ n ≤ 50
1 ≤ j < n
Car j is empty.

Output Format
For each test case, output a line containing

the string JAY if Jay can reach car n safely, or
the string JEFF otherwise.

Sample
Input
4
11 1
...........
12 6
.#..#.#..##.
5 3
...##
5 2
...##

Output
JAY
JAY
JAY
JEFF

Explanation
In the first test case, Jay can walk one car to the right every minute, and Jeff will not be able to catch up.

In the second test case, the initial state is .#..#J#..##. initially, where J represents the current location of Jay. Here are the actions Jay could take:

Clear the adjacent cars of debris.
The state becomes E#...J...##.. Here, E represents an eaten car.
Move to the next car.
The state becomes EE....J..##..
Move to the next car.
The state becomes EEE....J.##..
Move to the next car.
The state becomes EEEE....J##..
Clear the adjacent cars of debris.
The state becomes EEEEE...J.#..
Move to the next car.
The state becomes EEEEEE...J#..
Clear the adjacent cars of debris.
The state becomes EEEEEEE..J...
Move to the next car.
The state becomes EEEEEEEE..J..
Move to the next car.
The state becomes EEEEEEEEE..J.

Jay has reached the frontmost car before being eaten by Jeff!

In the third test case, Jay makes it to the frontmost car just in time, as illustrated by the fourth test case, where he can't make it.
*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define F first
#define S second
#define int long long
using namespace std;
const int N = 1e6 + 5, MOD = 1e9 + 7;

void solve(){
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    s = ' ' + s;
    int pos = 0, pos2 = x;
    while(pos2 <= n){
        if(s[pos2] != '#'){
            ++pos2;
            ++pos;
        }
        else{
            pos += 2;
            ++pos2;
        }
        if(pos >= pos2){
            cout << "JEFF" <<endl;
            return;
        }
    }
    cout << "JAY" <<endl;
}

int32_t main(){
    fast;
    int test = 1;
    cin >> test;
    while(test--)
        solve();
    return 0;
}


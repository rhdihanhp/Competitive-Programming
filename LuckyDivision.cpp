/*
Petya loves lucky numbers. Everybody knows that lucky
 numbers are positive integers whose decimal representation
  contains only the lucky digits 4 and 7. For example, 
  numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Petya calls a number almost lucky if it could be evenly
 divided by some lucky number. Help him find out if the 
 given number n is almost lucky.

Input
The single line contains an integer n (1 ≤ n ≤ 1000) —
 the number that needs to be checked.

Output
In the only line print "YES" (without the quotes),
 if number n is almost lucky. Otherwise, print "NO"
  (without the quotes).

Examples
inputCopy
47
outputCopy
YES
inputCopy
16
outputCopy
YES
inputCopy
78
outputCopy
NO
Note
Note that all lucky numbers are almost lucky as any number is evenly divisible by itself.

In the first sample 47 is a lucky number. In the second sample 16 is divisible by 4.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputVS.txt", "r", stdin);
    freopen("outputVS.txt", "w", stdout);
#endif

    int n;
    int a[13] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};

    cin >> n;
    bool isTrue = false;

    for (int i = 0; i < 13; i++)
    {
        if (n % a[i] == 0)
        {
            isTrue = true;
            break;
        }
    }
 
    if (isTrue )
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

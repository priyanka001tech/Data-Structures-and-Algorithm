#include <bits/stdc++.h>
using namespace std;

/* TC: theta(logn)
int setBits(int n)
{
    int count = 0;
    while(n){
        if(n & 1 == 1)
            count++;
        n = n >> 1;
    }
    return count;
    }
*/

//  Brian Kernighan’s Algorithm TC: O(logn)
/* Subtract a number by 1 and do it bitwise & with itself (n & (n-1)), rightmost set bit will get unset. 
Thus, if we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count.*/
int countSetBits(int n)
{
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << SetBits(n) << "\n";
    return 0;
}

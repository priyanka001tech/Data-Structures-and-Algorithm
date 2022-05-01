// Complexity    n
// O(log n)      2(10e7)
// O(√n)         10e14
// O(n)          10e7
// O(n log n)    10e6
// O(n√n)        10e5
// O(n^2)        5 · 103
// O(n^2 log n)  2 · 103
// O(n^3)        300
// O(2^n)        24
// O(n. 2^n)     20
// O(n^2. 2^n)   17
// O(n!)         11
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll; // comments that are mixed in with code
typedef pair<int, int> ii; // are aligned to the right like this
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000

// Common memset settings
//memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
//memset(arr, 0, sizeof arr); // to clear array of integers

// ans = a ? b : c; // to simplify: if (a) ans = b; else ans = c;
// ans += val; // to simplify: ans = ans + val; and its variants
// index = (index + 1) % n; // index++; if (index >= n) index = 0;
// index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
// int ans = (int)((double)d + 0.5); // for rounding to nearest integer
// ans = min(ans, new_computation); // min/max shortcut
// alternative form but not used in this book: ans <?= new_computation;
// some code use short circuit && (AND) and || (OR)

#define ALL(x) x.begin(), x.end()
#define UNIQUE(c) (c).resize(unique(ALL(c)) - (c).begin())
#define rep(i, a, b) for(int i = a; i < (b); ++i)

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a * (b / gcd(a, b)); }

ll numDiffPF(ll N) {
     ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
     while (PF * PF <= N) {
          if (N % PF == 0) ans++; // count this pf only once
          while (N % PF == 0) N /= PF;
          PF = primes[++PF_idx];
     }
     if (N != 1) ans++;
     return ans;
}

ll sumPF(ll N) {
     ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
     while (PF * PF <= N) {
          while (N % PF == 0) { N /= PF; ans += PF; }
          PF = primes[++PF_idx];
     }
     if (N != 1) ans += N;
     return ans;
}

void naiveMatching() {
     for (int i = 0; i < n; i++) { // try all potential starting indices
          bool found = true;
          for (int j = 0; j < m && found; j++) // use boolean flag ‘found’
               if (i + j >= n || P[j] != T[i + j]) // if mismatch found
                    found = false; // abort this, shift the starting index i by +1
          if (found) // if P[0..m-1] == T[i..i+m-1]
               printf("P is found at index %d in T\n", i);
     }
}

int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t=1;
     //cin >> t;
     while(t--){
        int n, s=0;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        
    }
    
 }

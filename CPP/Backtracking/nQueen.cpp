#include <bits/stdc++.h>
using namespace std;

bool safe(int a[][25], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        if (a[i][col] == 1)
            return false;
    }

    // dig check
    int i = row, j = col;
    while (i >= 0 and j >= 0)
    {
        if (a[i][j] == 1)
            return false;
        i--;
        j--;
    }

    while (i >= 0 and j < col)
    {
        if (a[i][j] == 1)
            return false;
        i--;
        j++;
    }
    return true;
}

void printboard(int board[][25], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << "|"<<board[i][j] << "|";
        cout << endl;
    }
}

bool NQ(int a[][25], int n, int i = 0)
{

    // base
    if (i == n)
    {
        printboard(a, n);
        return 1;
    }
    // recur
    for (int j = 0; j < n; j++)
    {
        if (safe(a, i, j))
        {
            a[i][j] = 1; //place if safe
            if (NQ(a, n, i + 1))
            {
                return 1; //recur if safe
            }
            a[i][j] = 0; //remove if un safe
        }
    }
    return 0; 
}

int main()
{
    int arr[25][25] = {0};
    int n;
    cin >> n;
    NQ(arr, n);
    return 0;
}


//Optimized
#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    void solve(int col, vector < string > & board, vector < vector < string >> & ans, vector < int > & leftrow, vector < int > & upperDiagonal, vector < int > & lowerDiagonal, int n) {
      if (col == n) {
        ans.push_back(board);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (leftrow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
          board[row][col] = 'Q';
          leftrow[row] = 1;
          lowerDiagonal[row + col] = 1;
          upperDiagonal[n - 1 + col - row] = 1;
          solve(col + 1, board, ans, leftrow, upperDiagonal, lowerDiagonal, n);
          board[row][col] = '.';
          leftrow[row] = 0;
          lowerDiagonal[row + col] = 0;
          upperDiagonal[n - 1 + col - row] = 0;
        }
      }
    }

  public:
    vector < vector < string >> solveNQueens(int n) {
      vector < vector < string >> ans;
      vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
      vector < int > leftrow(n, 0), upperDiagonal(2 * n - 1, 0), lowerDiagonal(2 * n - 1, 0);
      solve(0, board, ans, leftrow, upperDiagonal, lowerDiagonal, n);
      return ans;
    }
};
int main() {
  int n = 4; // we are taking 4*4 grid and 4 queens
  Solution obj;
  vector < vector < string >> ans = obj.solveNQueens(n);
  for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}

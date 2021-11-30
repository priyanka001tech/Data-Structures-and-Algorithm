#include <iostream>
using namespace std;
#define N 9        

void print(int arr[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
//Checks whether it will be legal to assign number to the given row, col
bool isValid(int puzzle[N][N], int row,	int col, int number)
{
	//Check if we find the same number in the similar row , we return false
	for (int x = 0; x <= 8; x++)
		if (puzzle[row][x] == number)
			return false;
	//Check if we find the same number in the similar column, we return false
	for (int x = 0; x <= 8; x++)
		if (puzzle[x][col] == number)
			return false;
	
	int sRow = row - row % 3,
			sCol = col - col % 3;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			if (puzzle[i + sRow][j +
							sCol] == number)
				return false;
	return true;
}
//Function to Solve the sudoku puzzle
bool solution(int puzzle[N][N], int row, int col)
{
	/* If the 8th row and 9th column (0 indexed matrix) is reached, 
	then return true to avoid backtracking*/
	if (row == N - 1 && col == N)
		return true;
	/*If column value becomes 9, move to next row and column 
	Now start from 0*/
	if (col == N) {
		row++;
		col = 0;
	}
	/*If the current position contains value >0, then iterate for next column*/
	if (puzzle[row][col] > 0)
		return solution(puzzle, row, col + 1);
	for (int number = 1; number <= N; number++)
	{
		//Check whether a number (1-9) can be placed in the given row,col
		if (isValid(puzzle, row, col, number))
		{	
			puzzle[row][col] = number;
			// Checking for next possibility with next column
			if (solution(puzzle, row, col + 1))
				return true;
		}
	
		puzzle[row][col] = 0;
	}
	return false;
}
// Driver Code
int main()
{
	// Here 0 means unassigned cells
	int puzzle[N][N] = { { 0, 7, 0, 0, 0, 0, 0, 0, 9 },
					{ 5, 1, 0, 4, 2, 0, 6, 0, 0 },
					{ 0, 8, 0, 3, 0, 0, 7, 0, 0 },
					{ 0, 0, 8, 0, 0, 1, 3, 7, 0 },
					{ 0, 2, 3, 0, 8, 0, 0, 4, 0 },
					{ 4, 0, 0, 9, 0, 0, 1, 0, 0 },
					{ 9, 6, 2, 8, 0, 0, 0, 3, 0 },
					{ 0, 0, 0, 0, 1, 0, 4, 0, 0 },
					{ 7, 0, 0, 2, 0, 3, 0, 9, 6 } };
        cout << "Before Solving " << endl;
    	print(puzzle);
    	cout << "" << endl;
    	cout << "After Solving " << endl;
	if (solution(puzzle, 0, 0))
		print(puzzle);
	else
		cout << "No solution exists " << endl;

	return 0;
}

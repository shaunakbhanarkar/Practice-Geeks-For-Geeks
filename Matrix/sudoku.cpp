#include<bits/stdc++.h>
using namespace std;

bool findUnassignedLocation(int grid[9][9], int &row, int &col)
{
    for (row = 0; row<9; row++)
    {
        for (col=0; col<9; col++)
        {
            if (grid[row][col]==0)
                return true;
        }
    }
    return false;
}

bool usedInRow(int grid[9][9], int row, int num)
{
    for (int i=0; i<9; i++)
    {
        if (grid[row][i]==num)
            return true;
    }
    return false;
}

bool usedInCol(int grid[9][9], int col, int num)
{
    for (int i=0; i<9; i++)
    {
        if(grid[i][col]==num)
            return true;
    }
    
    return false;
}

bool usedInBox(int grid[9][9], int rowStart, int colStart, int num)
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (grid[i+rowStart][j+colStart]==num)
                return true;
        }
    }
    return false;
}

bool isSafe(int grid[9][9], int row, int col, int num)
{
    return !usedInRow(grid,row,num) && !usedInCol(grid,col,num) &&
                !usedInBox(grid,row - row%3, col - col%3, num) &&
                (grid[row][col] == 0);
}

bool solveSudoku(int grid[9][9])
{
    int row, col;
    
    if (findUnassignedLocation(grid,row,col) == false)
        return true;
    
    for (int num=1; num<=9; num++)
    {
        if (isSafe(grid,row,col,num))
        {
            grid[row][col] = num;
            
            if (solveSudoku(grid))
                return true;
            
            grid[row][col] = 0;
        }
    }
    
    return false;
}
int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int grid[9][9];
	    
	    for (int i=0; i<9; i++)
	    {
	        for (int j=0; j<9; j++)
	        {
	            cin>>grid[i][j];
	        }
	    }
	    
	    solveSudoku(grid);
	    
	    for (int i=0; i<9; i++)
	    {
	        for (int j=0; j<9; j++)
	        {
	            cout<<grid[i][j]<<" ";
	        }
	       // cout<<endl;
	    }
	    cout<<endl;
	}
	return 0;
}

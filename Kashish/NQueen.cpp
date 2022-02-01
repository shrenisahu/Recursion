#include <bits/stdc++.h>
using namespace std;
const int N = 10;
bool SafeToPlace(bool board[N][N], int row, int col)
{

    for (int i = row - 1; i >= 0; i--)
    { // vu

        if (board[i][col])
        {
            return false;
        }
    }

    for (int i = col - 1; i >= 0; i--)
    { // HL
        if (board[row][i])
        {
            return false;
        }
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {

        if (board[i][j])
        {
            return false;
        }
    }

    for (int i = row - 1, j = col + 1; i >= 0 && j <= N-1; i--, j++)
    {

        if (board[i][j])
        {
            return false;
        }
    }

    return true;
}

bool NQueen(bool board[N][N], int row)
{
    if (row >= N )
    {
        return true;
    }

    for (int col = 0; col < N; col++)
    {

        if (SafeToPlace(board, row, col))
        {
            board[row][col] = 1;
            if (NQueen(board, row + 1))
            {
                return true;
            }

            board[row][col] = 0;
        }
    }

    return false;
}

int main()
{

    bool board[N][N];
    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {

            board[i][j] = 0;
        }
    }
if(NQueen(board,0)==false){
    cout<<"-1";
    

}

    for (int i = 0; i < N; i++)
        {

            for (int j = 0; j < N; j++)
            {

                cout << board[i][j] << " ";
            }
            cout << endl;
        }

    return 0;
}

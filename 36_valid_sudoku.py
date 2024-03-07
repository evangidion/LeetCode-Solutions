'''

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.

'''

from typing import List

class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        h = {}
        for i in range(1, 10):
            h[str(i)] = 0
        for row in range(9):
            for col in range(9):
                if board[row][col] != '.':
                    h[board[row][col]] += 1
                    if  h[board[row][col]] > 1:
                        return False

            for key in h.keys():
                h[key] = 0
            
            for row2 in range(9):
                if board[row2][row] != '.':
                    h[board[row2][row]] += 1
                    if h[board[row2][row]] > 1:
                        return False

            for key in h.keys():
                h[key] = 0
            
        for i in range(3):
            for j in range(3):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False

        for key in h.keys():
            h[key] = 0
        
        for i in range(3):
            for j in range(3, 6):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False
                
        for key in h.keys():
            h[key] = 0

        for i in range(3):
            for j in range(6, 9):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False

        for key in h.keys():
            h[key] = 0

        for i in range(3, 6):
            for j in range(3):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False

        for key in h.keys():
            h[key] = 0

        for i in range(3, 6):
            for j in range(3, 6):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False

        for key in h.keys():
            h[key] = 0

        for i in range(3, 6):
            for j in range(6, 9):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False

        for key in h.keys():
            h[key] = 0

        for i in range(6, 9):
            for j in range(3):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False

        for key in h.keys():
            h[key] = 0

        for i in range(6, 9):
            for j in range(3, 6):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False

        for key in h.keys():
            h[key] = 0

        for i in range(6, 9):
            for j in range(6, 9):
                if board[i][j] != '.':
                    h[board[i][j]] += 1
                    if h[board[i][j]] > 1:
                        return False

        return True
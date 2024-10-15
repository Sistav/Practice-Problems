class Solution:
    def spiralMatrix(self, m: int, n: int, head: Optional[ListNode]) -> List[List[int]]:
        matrix = [[None for _ in range(n)] for _ in range(m)]

        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        d = 0

        row, col = 0, 0

        while head:
            matrix[row][col] = head.val
            head = head.next

            next_row, next_col = row + directions[d][0], col + directions[d][1]

            if (next_row < 0 or next_row >= m or
                next_col < 0 or next_col >= n or
                matrix[next_row][next_col] is not None):
                d = (d + 1) % 4
                next_row, next_col = row + directions[d][0], col + directions[d][1]

            row, col = next_row, next_col

        for i in range(m):
            for j in range(n):
                if matrix[i][j] is None:
                    matrix[i][j] = -1

        return matrix
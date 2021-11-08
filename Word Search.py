class GFG:
    def __init__(self,h,w):
        self.R = h
        self.C = w
        self.dir = [[-1, 0], [1, 0], [0, 1], [0, -1], [1, 1], [1, -1], [-1, -1], [-1, 1]]

    def search2D(self, grid, row, col, word):
        if grid[row][col] != word[0]:
            return False

        for x, y in self.dir:

            rd, cd = row + x, col + y
            flag = True

            for k in range(1, len(word)):

                if (0 <= rd < self.R and
                        0 <= cd < self.C and
                        word[k] == grid[rd][cd]):

                    rd += x
                    cd += y
                else:
                    flag = False
                    break

            if flag:
                print(row, col, rd-x, cd-y)
                return True
        
        return False

    def patternSearch(self, grid, word):


        for row in range(self.R):
            for col in range(self.C):
                if self.search2D(grid, row, col, word):
                    return [row, col]
        return [-1, -1]


if __name__ == '__main__':
    grid = []
    height, width, n = list(map(int, input().split()))
    for i in range(height):
        grid.append(input())

    gfg = GFG(height, width)
    for i in range(n):
        x = input()

        a, b = gfg.patternSearch(grid, x)
        if a + b == -2:
            print(-1)
        # c, d = gfg.patternSearch(grid, x[::-1]) if a + b != -2 else [-1, -1]
        # print(a, b, c, d) if a + b != -2 else print(-1)

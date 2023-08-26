class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count = 0;
        int rowSize = grid.size();
        int colSize = grid[0].size();
        for(int row = 0; row < rowSize; row++)
        {
            for(int col = 0; col < colSize; col++)
            {
                    if(grid[row][col])
                    {
                        count += 4;
                        if(row < rowSize - 1)
                        {
                            if(grid[row + 1][col])
                            {
                                count -= 2;
                            }
                        }
                        if(col < colSize - 1)
                        {
                            if(grid[row][col + 1])
                            {
                                count -= 2;
                            }
                        }
                    }
            }
        }
        return count;

    }
};

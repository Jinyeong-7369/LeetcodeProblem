class Solution {
    public int mySqrt(int x) {
        // if(a * a <= x < b * b) return a
        if(x <= 1) return x;
        int i;
        for(i = 1; i <= 46339; i++)
        {
            if(i * i <= x && x < (i+1)*(i+1))
            {
                return i;
            }
        }
        return i;
    }
}
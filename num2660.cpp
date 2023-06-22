class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int len = player1.size();
        int score1 = 0;
        int score2 = 0;
        for(int i = 0; i < len; i++)
        {
            if(i > 1)
            {
                score1 += (player1[i-1]==10|| player1[i-2] == 10)*player1[i];
                score2 += (player2[i-1]==10|| player2[i-2] == 10)*player2[i];
            }
            else if(i == 1)
            {
                score1 += (player1[i-1]==10)*player1[i];
                score2 += (player2[i-1]==10)*player2[i];
            }
            score1 += player1[i];
            score2 += player2[i];
        }

        if(score1 > score2) return 1;
        else if(score1 == score2) return 0;
        else return 2;
    }
};
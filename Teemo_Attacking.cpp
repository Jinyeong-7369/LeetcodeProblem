class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        // 1. 현재 지속 시간 동안 공격이 없을 경우 : 지속 시간 만큼 데미지를 받음
        // 2. 현재 지속 시간 중에 공격이 들어올 경우 : 다음 공격 시간 - 현재 시간 만큼 데미지를 받게 됨
        // 3. 만약 마지막 공격이었을 경우 지속 시간 만큼 데미지를 그대로 받게 됨

        int ans = 0;
        for(int i = 0; i < timeSeries.size() - 1; i++)
        {
            if(timeSeries[i + 1] - timeSeries[i] >= duration)
            {
                ans += duration;
            }
            else
            {
                ans += timeSeries[i + 1] - timeSeries[i];
            }
        }
        ans += duration;

        return ans;
    }
};

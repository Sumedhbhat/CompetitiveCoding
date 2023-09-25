/*
 * @lc app=leetcode id=1090 lang=cpp
 *
 * [1090] Largest Values From Labels
 */

// @lc code=start
class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        priority_queue<pair<int,int>> pq; 
        for(int i=0;i<values.size();i++){
            pq.push({values[i],labels[i]});
        }
        map<int,int> count;
        int sum=0;
        int c=0;
        int it=0;
        while(!pq.empty())
        {
            pair<int,int> val=pq.top();
            if(count[val.second]<useLimit){
                count[val.second]++;
                c++;
                sum+=val.first;
                if(c==numWanted) break;
            }
            pq.pop();
        }
        return sum;
    }
};
// @lc code=end


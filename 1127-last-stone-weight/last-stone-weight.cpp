class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size()!=1&&pq.size()!=0){
            int el=pq.top();
            pq.pop();
            if(pq.top()==el) pq.pop();
            else {
                int val= pq.top();
                pq.pop();
                pq.push(el-val);
                // pq.top()=el-val;
            }
        }
        if(pq.size()==0) return 0;
        return pq.top();
    }
};
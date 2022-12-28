class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        priority_queue<int> pq; // max-heap
        
        for(int i=0; i<piles.size(); i++)
            pq.push(piles[i]);
        
        for(int i=0; i<k; i++) {
            
            int temp = pq.top();
            pq.pop();
            pq.push(temp - (temp/2));
            
        }
        
        int MinStone = 0;
        
        while(pq.empty() == false) {
            
            MinStone += pq.top();
            pq.pop();
            
        }
        
        return MinStone;
    }
};
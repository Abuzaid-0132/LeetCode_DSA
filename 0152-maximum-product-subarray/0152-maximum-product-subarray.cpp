class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int product = 1;
        int max_product = INT_MIN;
        
        for(int i=0; i<nums.size(); i++) {
            
            product *= nums[i];
            
            max_product = max(max_product, product);
            
            if(product == 0)
                product = 1;
            
        }
        
        product = 1;
        
        for(int i=nums.size()-1; i>=0; i--) {
            
            product *= nums[i];
            
            max_product = max(max_product, product);
            
            if(product == 0)
                product = 1;
            
        }
        
        return max_product;
    }
};
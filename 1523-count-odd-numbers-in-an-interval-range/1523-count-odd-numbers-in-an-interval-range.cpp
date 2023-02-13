class Solution {
public:
    int countOdds(int low, int high) {
        
        int nums = high - low + 1;    //counting total numbers in range{low, high}.
 
		if(low % 2 != 0 && high % 2 != 0)  
            return nums / 2 + 1;
        
        else
		    return nums / 2;
        
    }
};
class Solution {
public:
    int countPrimes(int n) {
        
        if(n == 0 || n == 1)
            return 0;
        
        vector<bool> prime(n, true);
        
        prime[0] = false;
        prime[1] = false;
        
        for(int i=2; i*i<n; i++) {
            
            for(int j=i*i; j<n; j+=i) {
                
                prime[j] = false;
            }
        }
        
        int count_prime = 0;
        
        for(int i=0; i<n; i++)
            if(prime[i] == true)
                count_prime++;
        
        
        return count_prime;
    }
};
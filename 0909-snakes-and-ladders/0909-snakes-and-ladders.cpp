class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        
        int n = board.size();
        
        int arr[n*n];      // 1D array of size n^2
        
        int i = n-1, j = 0; // starting pos
        
        int index = 0, direction = 1;   //  1 is left to right;
                                        // -1 is right to left
        
        // converting board to 1D array
        while(index<n*n)
        {
            arr[index++] = board[i][j];
            
            if(direction == 1 && j == n-1) // reach row end with +ve direction
            {
                // reverse direction
                direction = -1;
                
                // go up
                i--;    
            }
            else if(direction == -1 && j == 0)   // reach row start with direction right to left
            {
                // reverse direction
                direction = 1;    
                
                // go up
                i--;    
            }
            else
            {
                // for all other intermediate columns, just add inc variable to j
                j+=direction; 
            }
        }
        
        
        int visited[n*n];
        for(int i = 0; i<n*n; i++)
            visited[i] = 0;
        
        queue<int>q;
        
        int start;
        if(arr[0] > -1)
            start = arr[0] - 1;
        else 
            start = 0;
        
        q.push(start);          // push the starting point
        visited[start] = 1;
        
        int step = 0;   // our final answer
        
        
        // standard BFS algo
        while(!q.empty())
        {
            int size = q.size();
            while(size-->0)
            {
                int pos = q.front();
                q.pop();
                
                if(pos==n*n-1)  // if reached destination
                    return step;
                
                for(int next = pos+1; next<=min(pos+6, n*n - 1); next++)  // we can reach only                                                      the next 6 positions fron our current location
                {
                    int dest;
                    
                    if(arr[next]>-1)        // if snake or ladder exists
                        dest = arr[next]-1; // jump to that given position; here, -1 due to 0-                                                  based indexing
                    else
                        dest = next;
                    
                    if(!visited[dest])
                    {
                        visited[dest] = 1;
                        q.push(dest);   // push our new position into queue
                    }
                    
                        
                }
                
            }
            
            // after each BFS layer covered, we need to incease our answer variable as a new jump               is required to move further
            step++;
        }
        
        // when we never even reached our destionation
        return -1;
    }
};
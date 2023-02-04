class Solution {
public:
    int romanToInt(string str) {

        unordered_map<char,int> map {{'I',1},
                                     {'V',5},
                                     {'X',10},
                                     {'L',50},
                                     {'C',100},
                                     {'D',500},
                                     {'M',1000},
                                              };
        int ans = 0;

        for(int i=0; i<str.size(); i++){

            if(map[str[i]] < map[str[i+1]])
                ans -= map[str[i]];
            else
                ans += map[str[i]];
        }
        
        return ans;
    }
};
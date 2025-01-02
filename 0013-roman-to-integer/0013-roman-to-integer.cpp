class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        for (int i = s.length()-1; i >= 0; i--) {
            char rom_num = s[i];
            char prev;
            
            if (i == s.length()-1) {
                prev = '\0';
            }
            else {prev = s[i+1];}
            if (rom_num == 'I') {
                if (prev == 'V' || prev == 'X') {
                    res -= 1;
                    continue;
                }
                res += 1;
            }
            
            if (rom_num == 'V') {
                res += 5;
            }
            if (rom_num == 'X') {
                if (prev == 'L' || prev == 'C') {
                    res -= 10;
                    continue;
                }
                res += 10;
            }
            if (rom_num == 'L') {
                res += 50;
            }
            if (rom_num == 'C') {
                if (prev == 'D' || prev == 'M') {
                    res -= 100;
                    continue;
                }
                res += 100;
            }
            if (rom_num == 'D') {
                res += 500;
            }
            if (rom_num == 'M') {
                res += 1000;
            }
            
        }
        
        return res;
    }
};
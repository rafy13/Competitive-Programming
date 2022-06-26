'''
class Solution {
public:
    
    class ConfusingNumber {
    public:
        int digits[11], num_len, N;
        int memorize_valid[10][2];
        int memorize_valid_same[10][10][2][2][2];
        //                           0  1  2  3  4  5  6  7  8  9
        int valid_digits[10] =      {1, 1, 0, 0, 0, 0, 1, 0, 1, 1};
        
        ConfusingNumber() {}
        
        void precalculate(int num) {
            N = num;
            num_len = 0;
            while(num) {
                digits[num_len++] = num % 10;
                num /= 10;
            }
            
            reverse(digits, digits + num_len);
        }
        
        // 1234
        // 122
        int calc_valid(int pos, bool eql_big) {
            if (pos == num_len) {                
                return 1;
            }
            int &ret = memorize_valid[pos][eql_big];
            if (ret != -1) return ret;
            ret = 0;
            
            int max_dig = eql_big ? digits[pos] : 9;
            for (int dig = 0; dig <= max_dig; dig++) {
                if (valid_digits[dig]) {
                    ret += calc_valid(pos + 1, eql_big && (dig == max_dig));
                }
            }
            return ret;
        }
        
        int rotate(int dig) {
            if (dig == 0 || dig == 1 || dig == 8) return dig;
            if (dig == 6) return 9;
            if (dig == 9) return 6;
            
            return -1;
        }
        
        // 999*66
        // len = 6
        // 1996611 start = 0, (6 - 0) / 2 = 3
        // 001311
        int calc_valid_same(int l_pos, int r_pos, int Lz, int eql_big, int need_small) {
            if (l_pos == r_pos) {
                if (!eql_big) return 3;
                if (need_small && eql_big) return (0 < digits[l_pos]) + (1 < digits[l_pos]) + (8 < digits[l_pos]);
                if (eql_big)
                    return (0 <= digits[l_pos]) + (1 <= digits[l_pos]) + (8 <= digits[l_pos]);
                return 3;
            }
            if (l_pos > r_pos) {
                if (need_small && eql_big) return 0;
                return 1;
            }
            
            int &ret = memorize_valid_same[l_pos][r_pos][Lz][eql_big][need_small];
            if (ret != -1) return ret;
            ret = 0;
            
            int max_val = eql_big ? digits[l_pos] : 9;
            
            for (int dig = 0; dig <= max_val; dig++) {
                if (!valid_digits[dig]) continue;
                if (Lz && !dig) {
                    ret += calc_valid_same(l_pos + 1, r_pos, 1, 0, 0);
                } else {
                    int r_dig = rotate(digits[l_pos]);
                    int nw_eql_big = eql_big && (dig == max_val);
                    if (nw_eql_big == 0 || r_dig <= digits[r_pos]) {
                        ret += calc_valid_same(l_pos + 1, r_pos - 1, 0, nw_eql_big, r_dig < digits[r_pos] ? 0 : need_small);
                    } else {
                        ret += calc_valid_same(l_pos + 1, r_pos - 1, 0, nw_eql_big, 1);
                    }
                }
            }
            
            return ret;
        }
        
        
        int calculate_confusion_numbers(int number) {
            precalculate(number);
            
            memset(memorize_valid, -1, sizeof memorize_valid);
            memset(memorize_valid_same, -1, sizeof memorize_valid_same);
            
            int all =  calc_valid(0, 1);
            int bad = calc_valid_same(0, num_len - 1, 1, 1, 0);
            
            // cout << all << ' ' << bad << '\n'; 
            return all - bad;
        }
    };   
    
    int confusingNumberII(int n) {
        ConfusingNumber Solve;
        
        return Solve.calculate_confusion_numbers(n);
    }
};

'''
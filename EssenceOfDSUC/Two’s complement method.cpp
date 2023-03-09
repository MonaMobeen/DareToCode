class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        string hex = "0123456789abcdef", ans = "";
        unsigned int unum = num;
        while (unum) {
            ans = hex[unum & 15] + ans;
            unum >>= 4;
        }
        return ans;
    }
};

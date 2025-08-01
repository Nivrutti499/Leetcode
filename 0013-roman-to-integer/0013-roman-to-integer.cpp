class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (s[i] == 'I' && i + 1 < n && (s[i + 1] == 'V' || s[i + 1] == 'X'))
                total -= 1;
            else if (s[i] == 'X' && i + 1 < n && (s[i + 1] == 'L' || s[i + 1] == 'C'))
                total -= 10;
            else if (s[i] == 'C' && i + 1 < n && (s[i + 1] == 'D' || s[i + 1] == 'M'))
                total -= 100;
            else if (s[i] == 'I')
                total += 1;
            else if (s[i] == 'V')
                total += 5;
            else if (s[i] == 'X')
                total += 10;
            else if (s[i] == 'L')
                total += 50;
            else if (s[i] == 'C')
                total += 100;
            else if (s[i] == 'D')
                total += 500;
            else if (s[i] == 'M')
                total += 1000;
        }

        return total;
    }
};

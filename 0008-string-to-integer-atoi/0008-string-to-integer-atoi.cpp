class Solution {
public:
    int myAtoi(string s) {
        int index = 0; 
        int len = s.length();


        while (index < len && s[index] == ' ') {
            index++;
        }
        if (index == len) {
            return 0;
        }

        
        int sign = 1;
        if (s[index] == '-') {
            sign = -1;
            index++;
        } else if (s[index] == '+') {
            index++;
        }

        // Build the number safely using long long
        long long result = 0;

        while (index < len) {
            if (!isdigit(s[index])) {
                break;
            }

            int digit = s[index] - '0';

            
            if (result > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            result = result * 10 + digit;
            index++;
        }

       
        long long finalValue = result * sign;

        if (finalValue > INT_MAX) return INT_MAX;
        if (finalValue < INT_MIN) return INT_MIN;

        return (int)finalValue;
    }
};
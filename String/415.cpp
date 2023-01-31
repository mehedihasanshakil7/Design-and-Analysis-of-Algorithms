class Solution {
public:
    string addStrings(string num1, string num2) {
        string sum = "";
        int n1 = num1.length()-1;
        int n2 = num2.length()-1;
        int carry = 0, temp;
        while(n1 >= 0 || n2 >= 0) {
            if(n1 < 0) {
                temp = (num2[n2]-'0')+carry;
                sum += (temp%10) + '0';
                carry = temp / 10;
                n2--;
            }
            else if(n2 < 0) {
                temp = (num1[n1]-'0')+carry;
                sum += (temp%10) + '0';
                carry = temp / 10;
                n1--;
            }
            else {
                temp = (num1[n1]-'0') + (num2[n2]-'0') + carry;
                sum += (temp%10)+'0';
                carry = temp / 10;
                n1--;
                n2--;
            }
        }
        if(carry) {
            sum += carry+'0';
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};

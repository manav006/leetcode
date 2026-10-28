class Solution {
public:
    int countDigits(int num) {
        int count =0;
        int number = num;
        while(number>0){
            int dig = number%10;
            number/=10;
            if(num%dig==0){
                count++;
            }
        }
        return count;
    }
};
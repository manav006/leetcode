class Solution {
public:
    int myAtoi(string s) {
        long long ans =0;
        int i=0;
        while(i<s.size() && s[i]==' ' ){
            i++;
        }
        bool neg=false;
        if(i<s.size()){
            if(s[i]=='-'){
                neg =true;
                i++;
            }else if(s[i]=='+'){
                neg=false;
                i++;
            }
        }

        while(i<s.size()){
            int ascii = s[i]-'0';

            if(ascii>9 || ascii<0){
                break;
            }

            
            ans = ans*10+ascii;
            if(ans>INT_MAX){
                if(neg){
                    return INT_MIN;
                }else{
                    return INT_MAX;
                }
            }
            i++;
        }

        if(neg && -ans<INT_MIN){
            return INT_MIN;
        }
        if(!neg && ans>INT_MAX){
            return INT_MAX;
        }
        
        if(neg) return -ans;
        return ans;
    }
};
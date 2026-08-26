class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i = 0;
        int j = 0;
        int ones = 0;
        int mini = INT_MAX;
        string ministr = "";
       
        while (j < s.size()) {
            while (j<s.size() && ones != k) {
                if (s[j] == '1') {
                    ones++;
                }
                j++;
            }
            if (ones == k) {

                while (i < s.size() && s[i] == '0') {
                    i++;
                }
                string newstr = s.substr(i, (j - i));
                if (ministr == "") {
                    ministr = newstr;
                } else {
                    if (ministr.size() == newstr.size()) {
                        if (newstr < ministr) {
                            ministr = newstr;
                        }
                    } else if (ministr.size() > newstr.size()) {
                        ministr = newstr;
                    }
                }
            }
            if(s[i]=='1'){
                ones--;
                i++;
            }
            
            

            while (i<s.size() && s[i] != '1') {
                i++;
            }
        }

        return ministr;
    }
};
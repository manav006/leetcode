class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int j=0;
        int len=0;
        int ans=0;
        while(i<chars.size()){
            j=i;
            len=0;
            while(j<chars.size() && chars[j]==chars[i]){
                len++;
                j++;
            }

            chars[ans]=chars[i];
            ans++;
            if(len>1){
                string s = to_string(len);
                int k=0;
                while(k<s.size()){
                    chars[ans]=s[k];
                    ans++;
                    k++;
                }
            }
            i=j;
        }
        return ans;
    }
};
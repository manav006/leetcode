class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        vector<int>v;
        for(int i=0;i<p.size();i++){
            mp1[p[i]]++;
        }

        int i=0;
        int j=p.size()-1;
        for(int k=0;k<=j;k++){
            mp2[s[k]]++;
        }
        while(j<s.size()){
            bool flag =true;
            for(auto e:mp2){
                if(mp1.find(e.first)==mp1.end() || mp1[e.first]!=e.second){
                    flag = false;
                    break;
                }
            }
            if(flag){
                v.push_back(i);
            }

            if(j==s.size()-1){
                break;
            }
            mp2[s[i]]--;
            if(mp2[s[i]]==0){
                mp2.erase(s[i]);
            }
            mp2[s[j+1]]++;
            i++;
            j++;

        }

        return v;

    }
};
class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int j=k-1;
        int vowel=0;
        int maxi=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowel++;
            }
            maxi = max(maxi,vowel);
        }
        while(j<s.size()-1){
            if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowel--;
            }

            if(s[j+1]=='a'|| s[j+1]=='e' || s[j+1]=='i' || s[j+1]=='o' || s[j+1]=='u'){
                vowel++;
            }
            maxi=max(maxi,vowel);
            i++;
            j++;
        }

        return maxi;
    }
};
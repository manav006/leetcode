class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=0;
        for(int i=0;i<sentences.size();i++){
            int word =1;
            for(int j=0;j<sentences[i].size();j++){
                if(j!=0 && sentences[i][j]==' ' && sentences[i][j-1]!=' '){
                    word++;
                }
            }
            maxi = max(maxi , word);
        }
        return maxi;
    }
};
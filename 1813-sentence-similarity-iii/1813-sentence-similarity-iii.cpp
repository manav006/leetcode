class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string>a,b;
        stringstream s1(sentence1), s2(sentence2);
        string word;
        while(s1 >> word){
            a.push_back(word);
        }
        while(s2>>word){
            b.push_back(word);
        }

        if(a.size()>b.size()) swap(a,b);
        int i =0;

        while(i<a.size() && a[i]==b[i]){
            i++;
        }

        int j=a.size()-1;
        int k=b.size()-1;

        while(j>=i && b[k]==a[j]){
            k--;
            j--;
        }

        return j<i;
    }
};
class Solution {
public:
int calc(string s){
    vector<int>days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m = (s[0]-'0')*10 + (s[1]-'0');
    int day = (s[3]-'0')*10 + (s[4]-'0');

    for(int i=0;i<m-1 ;i++){
        day+=days[i];

        
    }
    return day;
}
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string st = max(arriveAlice , arriveBob);
        string end = min(leaveAlice , leaveBob);
        if(st> end) return 0;

        return calc(end) -calc(st)+1;

    }
};
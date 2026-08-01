class Solution {
public:
    int countValidPrefixes(string s) {
        // int end=1;
        int validcnt=0;
        for(int i=1;i<=s.size();i++){
            string subs=s.substr(0,i);
            int cnt0=0;
            int cnt1=0;
            for(auto x:subs){
                if(x=='0') cnt0++;
                else cnt1++;
            }
            if(i%2==0 && cnt0==cnt1){
                validcnt++;
                continue;
            }
            else if(i%2!=0 && abs(cnt0-cnt1)==1){
                validcnt++;
                continue;
            }
        }
        return validcnt;
    }
};
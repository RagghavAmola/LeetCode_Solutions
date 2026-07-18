class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        unordered_map<char,int> um;
        for(auto i:s){
            if(um.find(i)==um.end()) um.insert({i,1});
            else um[i]++;    
        }
        if(um.find(x)==um.end()) return s;
        if(um.find(y)==um.end()) return s;
        string t;
        int ind=0;
        for(auto it:um){
            char j=it.first;
            int cnt=it.second;
            if(j==y){
                t.insert(ind,um[y],y);
                ind+=cnt;
            }
        }
        for(auto it:um){
            char j=it.first;
            int cnt=it.second;
            if(j!=x && j!=y){
                t.insert(ind,cnt,j);
                ind+=cnt;
            }
        }
        for(auto it:um){
            char j=it.first;
            int cnt=it.second;
            if(j==x){
                t.insert(ind,cnt,x);
                ind+=cnt;
            }
        }
        return t;
    }
};
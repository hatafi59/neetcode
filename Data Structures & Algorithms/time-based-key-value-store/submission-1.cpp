class TimeMap {
        unordered_map<string,vector<pair<string,int>>> map;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({value,timestamp});
    }
    
    string get(string key, int timestamp) {
        string res="";
        if (map.find(key) == map.end()) {
            return res;
        }
        
        int l=0,r=map[key].size()-1;
        while(l<=r){
            int mid =(l+r)/2;
            if(map[key][mid].second > timestamp )
                r=mid-1;
            else
            {res=map[key][mid].first;
                l=mid+1;}

        }
        return res;
        
    }
};

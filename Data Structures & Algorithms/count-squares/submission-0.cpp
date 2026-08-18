class CountSquares {
    map<pair<int,int>,int> m;
public:
    CountSquares() {
    }
    
    void add(vector<int> point) {
        m[{point[0],point[1]}]++;
    }
    
    int count(vector<int> point) {
        int qx=point[0],qy=point[1];
        int c=0;
        for(auto k : m){
            int x = k.first.first;
            int y = k.first.second;
            if (x != qx && y != qy) { //same points ignored
                int dx = abs(x - qx);
                int dy = abs(y - qy);
                if (dx == dy) { 
                    if (m.count({x, qy}) && m.count({qx, y})) {
                        c += m[{x, qy}] * m[{qx, y}] * k.second;
                    }
                }
            }
        }

        return c;

        
    }
};

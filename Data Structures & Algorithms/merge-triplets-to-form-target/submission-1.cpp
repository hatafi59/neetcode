class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int maxa=0;
        int maxb=0;
        int maxc=0;
        for( int i=0 ; i<triplets.size() ; i++){
            if(triplets[i][0]>target[0] || triplets[i][1]>target[1] || triplets[i][2]>target[2]) continue;
            maxa=max(maxa,triplets[i][0]);
            maxb=max(maxb,triplets[i][1]);
            maxc=max(maxc,triplets[i][2]);
            if(maxa==target[0] && maxb==target[1] && maxc==target[2]) return true;
        }

        return false ;
    }
};

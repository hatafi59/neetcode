class Twitter {
public:
    vector<vector<int>> tweets; 
    unordered_map<int, unordered_set<int>> followers;
    Twitter() {}
    
    void postTweet(int userId, int tweetId) {
        tweets.push_back({tweetId, userId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> ans;
        
        for (int i = tweets.size() - 1; i >= 0; --i) {
            int tweetId = tweets[i][0];    
            int tweetOwner = tweets[i][1];
            
            if (tweetOwner == userId || followers[tweetOwner].count(userId)) {
                ans.push_back(tweetId);
            }
            
            if (ans.size() == 10) break;
        }
        
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        followers[followeeId].insert(followerId);
    }
    
    void unfollow(int followerId, int followeeId) {
        followers[followeeId].erase(followerId);
    }
};
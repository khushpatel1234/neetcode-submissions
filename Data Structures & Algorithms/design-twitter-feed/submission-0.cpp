class Twitter {
public:
vector<pair<int,int>>tweets;
unordered_map<int,unordered_set<int>>follows;
int k = 0;

    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        
        tweets.push_back(make_pair(userId,tweetId));
    }
    
  
        vector<int> getNewsFeed(int userId) {
    vector<int> ans;
   
    for (int t = tweets.size() - 1; t >= 0 && ans.size() < 10; t--) {
        int tweetAuthor = tweets[t].first;

       
        if (tweetAuthor == userId || follows[userId].count(tweetAuthor)) {
            ans.push_back(tweets[t].second);
        }
    }
    return ans;
}
    
    
    void follow(int followerId, int followeeId) {
        follows[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        follows[followerId].erase(followeeId);
    }
};

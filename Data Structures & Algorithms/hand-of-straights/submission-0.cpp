class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {

        if(hand.size()%groupSize) return false ;

        map<int,int> freq;
        for(auto item : hand) freq[item]++;
        

        while (!freq.empty()) {
            int start = freq.begin()->first; 
            for (int i = 0; i < groupSize; i++) {
                int card = start + i;
                if (!freq.count(card)) return false;
                freq[card]--;
                if (freq[card] == 0) freq.erase(card);
            }

        }
    return true;

    }
};

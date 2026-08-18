class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int  n = gas.size();
      float total = 0 , som_station = 0 ;
      int start = 0 ;
      for(int i = 0 ; i < n ; i++ ){
        int diff=gas[i] - cost[i];
        total += diff  ;
        som_station += diff ;
        if(som_station < 0 ){
            som_station = 0 ;
            start = i+1 ;
        }
      }
      return total >= 0 ? start : -1 ;
    }
};

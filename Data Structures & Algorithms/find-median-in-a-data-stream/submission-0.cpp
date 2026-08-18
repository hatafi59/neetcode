class MedianFinder {
    priority_queue<int> Max;
    priority_queue<int> Min;

public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(Min.empty()){ 
            Min.push(-num);
            return ;
        }
        if(num >= -Min.top()) Min.push(-num);
        else Max.push(num);
        if(Max.size()-Min.size() > 1 || Min.size()-Max.size() > 1 ){
            int el;
            if(Max.size()> Min.size()){
                el = Max.top();
                Max.pop();
                Min.push(-el);
            }else{
                el = -Min.top();
                Min.pop();
                Max.push(el);
            }
        }
        
    }
    
    double findMedian() {
        if(Max.size()==Min.size()) return (double)(Max.top()-Min.top())/2;
        return Max.size()> Min.size() ? (double)Max.top() : (double)(-Min.top());
    }
};

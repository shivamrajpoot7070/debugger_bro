class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>>pq;
    unordered_map<int,int>mpp;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i++){
            pq.push(i);
        }
    }
    
    int popSmallest() {

        int curr=pq.top();
        pq.pop();
        mpp[curr]++;

        return curr;
    }
    
    void addBack(int num) {
        
        if(mpp[num]>0){
            pq.push(num);
            mpp[num]--;
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */
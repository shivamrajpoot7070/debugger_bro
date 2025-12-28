class Solution {
public:
    long long minimumCost(int cost1, int cost2, int both, int need1, int need2) {
        

        if(both<=cost1 && both<=cost2){
             long long third=(long long)both* max((long long)need1,(long long)need2);
             return third;
        }

        long long first=(long long)cost1*(long long)need1;
        cout<<first<<" ";
        long long second=(long long)cost2*(long long)need2;
        cout<<second<<" ";
        long long third=(long long)both* max((long long)need1,(long long)need2);
        cout<<third<<" ";
        long long fourth=0;

        if(need2<need1){
            cout<<"need2"<<" ";
            fourth+=(long long)both*need2;
            long long rem=need1-need2;
            fourth+=rem*(long long)cost1;
        }
        if(need2>need1){
             cout<<"need1"<<" ";
            fourth+=(long long)both*need1;
            long long rem=need2-need1;
            fourth+=rem*(long long)cost2;
        }

        if(fourth==0){
            fourth=LLONG_MAX;
        }

        cout<<fourth<<" ";
        long long m=min(fourth,third);
        long long comb=first+second;

        return min(m,comb);

    }
};
class Solution {
public:
    bool canPlaceFlowers(vector<int>& bed, int n) {
        int sz=bed.size() , count=0;
        for(int i=0;i<sz;i++){
            if(bed[i]==0){
                bool prevemp = (i == 0 || bed[i - 1] == 0);
                bool nexemp = (i == sz - 1 || bed[i + 1] == 0);
                if (prevemp && nexemp){
                    count++;
                    i++;
                }
            }

        }
        return count >= n;
        
    }
};
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> arr(n,1);

        //left array
        for(int i = 1 ; i <n ; i++){
            if(ratings[i]>ratings[i-1]){
                arr[i]=arr[i-1]+1;
            }
        }

        //right array
        for(int i = n-2 ; i >=0 ; i--){
            if(ratings[i+1]<ratings[i]){
                arr[i]=max(arr[i], arr[i+1]+1);
            }
        }

        //calc the sum 
        int sum =0 ; 
        for(int i : arr){
            sum = sum + i;
        }
        return sum ;

        
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        //this is based on a very simple concept that first we need to find the maxm height form left side and simult. from the right side , we can create two seperate arrays that will store the result for us , later on we can calc the answer using an int ans , by adding the min(left[i], right[i])-height[i] -> this will be the amount of water stored by the heighed block over the time by the rain water 

        // to do this one soln we wont need stack we can do this by using general approach however after this we will compare the time complexity for our approach 
        int n = height.size();
        vector<int> left(n);
        vector<int> right(n);
        //filling these arrays 
        left[0] = height[0]; //first element will be same obviously '
        right[n-1] = height[n-1]; //right's last element will be same obvious 

        //now for left-> we need to continiously find and store the element which is greater than the first element and do the opposite in the right side 
        for(int i = 1 ; i<n ; i++){
            left[i] = max(left[i-1] , height[i]);
        }
        for(int i = n-2 ; i>=0; i--){
            right[i] = max(right[i+1] , height[i]);
        }
        int ans = 0;
        //calc the answer 
        for(int i = 0 ; i< n ; i++){
            ans = ans + (min(left[i] ,right[i]) - height[i]);
        }
                       


        return ans;
        
    }
};
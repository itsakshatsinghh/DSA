class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i =0;i<nums1.size();i++){
            int target=nums1[i];
            int great=-1;
            bool isFound=false;
            for(int j=0;j<nums2.size();j++){
                if(target==nums2[j]){
                   isFound=true;
                }if(isFound && nums2[j]>target){
                    great=nums2[j];
                    break;
                }

            }
            ans.push_back(great);
        }
        return ans;
        
    }
};
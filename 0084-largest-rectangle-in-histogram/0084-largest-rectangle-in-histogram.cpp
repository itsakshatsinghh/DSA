class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        //right smaller index
        int n=h.size();
        stack<int> s;
        vector<int> right(h.size(),0);
        //rev loop
        for(int i=h.size()-1;i>=0;i--){
            while(s.size()>0 && h[s.top()]>=h[i]){
                s.pop();
            }
            right[i]=s.empty()?n:s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        //left one
         vector<int> left(h.size(),0);
        //rev loop
        for(int i=0;i<h.size();i++){
            while(s.size()>0 && h[s.top()]>=h[i]){
                s.pop();
            }
            left[i]=s.empty()?-1:s.top();
            s.push(i);
        }


        int ans=0;
        // int r=right[i];
        // int l=left[i];
        
        int currans;
        for(int i =0;i<h.size();i++){
            int w=right[i]-left[i]-1;
            currans=h[i]*w;
            ans=max(currans, ans);

        }
        return ans;
        
    }
};
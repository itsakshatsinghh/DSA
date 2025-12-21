class Solution {
public:
    int romanToInt(string s) {
        //using an unordered_map
        unordered_map<char, int> map{
            {'I' , 1},{'V' , 5},
{'X' , 10}, {'L' , 50}, {'C' , 100}, {'D' , 500}, {'M' , 1000}    } ;
//running a loop to read the given nums string and returning the total 
        int total=0;
        for(int i = 0 ; i<s.size();i++){
            //greater before condn
            if(i+1<s.size() && map[s[i]]<map[s[i+1]]){
                total=total-map[s[i]];
            }else{
                //normal condn 
            total = total + map[s[i]];
            }

            
        }
        return total;
        
    }
};
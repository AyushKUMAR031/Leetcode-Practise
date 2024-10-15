class Solution {
public:
    int minAddToMakeValid(string s) {
        int imbalance = 0;
        int close = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                imbalance++;
            }else{
                if(imbalance > 0){
                    imbalance--;
                }else{
                    close++;
                }
            }
        }
        return imbalance + close;
    }
};
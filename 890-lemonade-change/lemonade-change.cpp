class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,twenty=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) five++;
            else if(bills[i]==10){
                if(five==0) return false;
                ten++;five--;
             }
            else if(bills[i]==20){
                if(ten&&five){
                    ten--;five--;twenty++;
                }
                else if(ten==0&&five>2){
                    twenty++;five=five-3;
                }
                else return false;
            }
        }
        return true;
    }
};
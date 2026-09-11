class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        while(i>=0 ||j>=0){
            int sum=carry;
            if(i>=0) sum+= a[i--]-'0';
            if(j>=0) sum+= b[j--]-'0'; 
            carry= sum>1? 1: 0;        
            res+=to_string(sum%2);
        }
        if(carry) res+=to_string(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};
//initilialize var sum with a var carry both initially 0
//iterate from back in both strings, until any of both iterators is greater than -1 
// add both the bits that iterators are pointing to and store them in sum
// if sum >1  , store 1 in carry , if not store 0
// append the sum%2 to a result string 
// in next iteration of loop , initialize sum with the previous carry and repeat the process
// after completetion of while loop , if carry still exists append it to result string
//reverse the result string and return it
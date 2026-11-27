class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int max_uniq=0;
        unordered_map<int,int> freq;
        int i=0,j=0;
        while(j<fruits.size())
        {   freq[fruits[j]]++;
            while(freq.size()>2){
                freq[fruits[i]]--;
                if(freq[fruits[i]]==0) freq.erase(fruits[i]);
                i++;
            }
            // if(typafruits.size()<3) uniq_size=typafruits.size();
            
            max_uniq=max(max_uniq,j-i+1);
            j++;
        }
        return max_uniq;
    }
};
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        
        for (const string& op : operations) {
            if (op == "+") {
                int topVal = record.back();
                int prevVal = record[record.size() - 2];
                record.push_back(topVal + prevVal);
            } 
            else if (op == "D") {
                record.push_back(2 * record.back());
            } 
            else if (op == "C") {
                record.pop_back();
            } 
            else {
                record.push_back(stoi(op));
            }
        }
        
        int totalSum = 0;
        for (int score : record) {
            totalSum += score;
        }
        return totalSum;
    }
};
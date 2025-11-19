class Solution {
public:
    double average(vector<int>& salary) {
        double totle = 0;
        int M = salary[0], m=salary[0];
        for(int i=0; i<salary.size(); i++){
            totle += salary[i];
            if(salary[i]>M) M=salary[i];
            if(salary[i]<m) m=salary[i];
        }
        return(totle-M-m)/(salary.size()-2);
    }
};

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {

        vector<int> minutes;

        for(int i =0;i<timePoints.size();i++)
        {
           string  curr = timePoints[i];

           int hour  =   stoi(curr.substr(0,2));
           int min   =   stoi(curr.substr(3,2));
           int total = hour*60 + min;

           minutes.push_back(total);




        }


        sort(minutes.begin(),minutes.end());
         int minimum = INT_MAX;
        for(int i =0;i<minutes.size()-1;i++)
        {
            int diff = minutes[i+1]-minutes[i];

            minimum = min(minimum,diff);
        }


        int lastdiff = (minutes[0]+1440)-minutes[minutes.size()-1];
        minimum = min(minimum,lastdiff);
        
        
return minimum;
    }
};

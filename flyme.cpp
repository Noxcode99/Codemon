class Solution {
public:
    int canCompleteCircuit(vector<int>& fuel, vector<int>& airport) {

       if(accumulate(fuel.begin(),fuel.end(),0)<accumulate(airport.begin(),airport.end(),0))return -1;
       int n =fuel.size();
       int minimum_plane =0;
       int ans =0;
       for(int i=0;i<n;i++)
       {
        minimum_plane += fuel[i]-airport[i];
        if(minimum_plane<0)
        {
          ans = i + 1;
          minimum_plane = 0;
        }
       }
       return ans;
    }
};
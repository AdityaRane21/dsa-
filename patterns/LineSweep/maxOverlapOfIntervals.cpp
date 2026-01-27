// meeting rooms
https://www.geeksforgeeks.org/problems/attend-all-meetings-ii/1
// max overlaps
https://www.geeksforgeeks.org/problems/maximum-intervals-overlap5708/1

// min meeting rooms == max overlaps 
class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        int n = start.size();
        
        map<int, int> events;
        for(int i = 0; i < n; i++) {
            int startPoint = start[i];
            int endPoint   = end[i];
            
            events[startPoint]++;
            events[endPoint]--;
        }
        
        int result = 0;
        int count = 0;
        
        for(auto& p : events){
            count   += p.second;
            result  = max(result, count);
        }
        return result;
    }
};

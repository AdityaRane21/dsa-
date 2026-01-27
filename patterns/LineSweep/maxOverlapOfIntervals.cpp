// min meeting rooms == max overlaps 

// meeting rooms
https://www.geeksforgeeks.org/problems/attend-all-meetings-ii/1

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

// max overlaps
https://www.geeksforgeeks.org/problems/maximum-intervals-overlap5708/1
// TLE 
class Solution {
  public:
    vector<int> findMaxGuests(int Entry[], int Exit[], int N) {

        map<int, int> events;

        for(int i = 0; i < N; i++) {
            events[Entry[i]]++;
            events[Exit[i] + 1]--;
        }

        int count = 0;
        int maxGuests = 0;
        int time = 0;

        for(auto &p : events) {
            count += p.second;
            if(count > maxGuests) {
                maxGuests = count;
                time = p.first;
            }
        }

        return {maxGuests, time};
    }
};

// Passed solution
class Solution {
  public:
    vector<int> findMaxGuests(int Entry[], int Exit[], int N) {

        sort(Entry, Entry + N);
        sort(Exit, Exit + N);

        int i = 0, j = 0;
        int curr = 0, maxGuests = 0;
        int time = 0;

        while(i < N && j < N) {
            if(Entry[i] <= Exit[j]) {   // inclusive entry
                curr++;
                if(curr > maxGuests) {
                    maxGuests = curr;
                    time = Entry[i];
                }
                i++;
            } else {
                curr--;
                j++;
            }
        }

        return {maxGuests, time};
    }
};



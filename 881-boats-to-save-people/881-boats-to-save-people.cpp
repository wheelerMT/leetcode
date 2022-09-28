class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int* start = &people[0];
        int* end = &people[people.size() - 1];
        int numOfBoats {};
        
        while (start <= end)
        {
            if (*start + *end <= limit)
            {
                ++numOfBoats;
                ++start;
                --end;
            } else
            {
                ++numOfBoats;
                --end;
            }
        }
        
        return numOfBoats;
    }
};
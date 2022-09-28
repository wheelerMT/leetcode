class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3) return false;
        
        int index {1};
        while (index < arr.size() && arr[index] > arr[index - 1]) ++index;
        if (index == 1 or index == arr.size()) return false;
        while (index < arr.size() && arr[index] < arr[index - 1]) ++index;
        
        return index == arr.size();
    }
};
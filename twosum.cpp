vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Stores numbers and their indices
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Found the two indices
        }
        numMap[nums[i]] = i; // Store the current number's index
    }
    return {}; // Return empty vector if no solution found (shouldn't happen)
}

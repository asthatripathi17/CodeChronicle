// Using sorting
int minIncrementForUnique(vector<int>& nums) {
    int increm = 0;
    sort(nums.begin(),nums.end());
    for(int i = 1;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            nums[i]++;
            increm++;
        }
        else if(nums[i]<nums[i-1]){
            increm += (nums[i-1]-nums[i]+1);
            nums[i] = nums[i-1]+1;
        }
    }

    return increm;
}

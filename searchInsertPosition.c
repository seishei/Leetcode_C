int searchInsert(int* nums, int numsSize, int target) {
	int i;
	if(target <= nums[0])
		return 0;
	if(target > nums[numsSize - 1])
		return numsSize;
	for(i = 1; i < numsSize; i++){
		if(nums[i - 1] < target && target <= nums[i])
			return i;
	}
}

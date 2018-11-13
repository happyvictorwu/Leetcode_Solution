class Solution {
    public int removeElement(int[] nums, int val) { 
        // after handing boundary
        int current = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[current] = nums[i];
                current += 1;
            }                
        }        
        return current;
    }
}

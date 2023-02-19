/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
  var bSearch = function(nums, left, right, target) {
    if (left > right) {
      return left;
    }
    var mid = Math.trunc((left+right)/2);
    if (nums[mid] === target) {
      return mid;
    } else if (nums[mid] < target) {
      return bSearch(nums, mid+1, right, target);
    } else {
      return bSearch(nums, left, mid-1, target);
    }

  }
  return bSearch(nums, 0, nums.length, target);
};
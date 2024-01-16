var peakIndexInMountainArray = function(arr) {
  var bSearch = function(nums, left, right, type) {
    if (left > right) {
      return left;
    }
    var mid = Math[type]((left+right)/2);
    if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]) {
      return mid;
    } else if (nums[mid] > nums[mid-1]) {
      return bSearch(nums, mid+1, right, "trunc");
    } else {
      return bSearch(nums, left, mid-1, "ceil");
    }
  }
  return bSearch(arr, 0, arr.length-1, "trunc");
};

console.log(peakIndexInMountainArray([1, 3,5,3,2,0]));

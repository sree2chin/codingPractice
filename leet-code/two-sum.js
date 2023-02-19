
var twoSum = function(nums, target) {
  var hashMap = {};
  var i;
  for(i=0; i<nums.length; i++) {
    hashMap[nums[i]] = i;
  }
  var diff;
  for(i=0; i<nums.length; i++) {
    diff = target - nums[i];
    if(hashMap[diff] && hashMap[diff] !== i) {
      return [i, hashMap[diff]];
    }
  }
};
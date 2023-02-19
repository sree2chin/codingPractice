/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
  if (m  === 0 && n === 0) {
    return [];
  }
  if (m === 0) {
    return nums2;
  }
  if (n === 0) {
    return nums1;
  }
  
  var p1 = m-1;
  var p2 = n-1;
  var i = m+n-1;
  while (p1 > -1 && p2 > -1) {
    if (nums1[p1] < nums2[p2]) {
      nums1[i] = nums2[p2];
      i--;
      p2--;
    } else {
      nums1[i] = nums1[p1]
      i--;
      p1--;
    }
  }
  return nums1;
};
// not there in leetcode...
var mergeTwoArrays = function(list1, list2) {
  var list1Len = list1.length;
  var list2Len = list2.length;
  if (!list1Len && !list2Len) {
    return [];
  }
  if (!list1Len) {
    return list2;
  }
  if (!list2Len) {
    return list1;
  }
  var resultList = [];
  var index1 = 0;
  var index2 = 0;
  while(index1 < list1Len && index2 < list2Len) {
    if(list1[index1] <= list2[index2]) {
      resultList.push(list1[index1]);
      index1++;
    } else {
      resultList.push(list2[index2]);
      index2++;
    }
  }
  if(index2 < list2.length) {
    for (var i=index2; i<list2.length; i++) {
      resultList.push(list2[i]);
    }
  }
  if(index1 < list1.length) {
    for (var i=index1; i<list1.length; i++) {
      resultList.push(list1[i]);
    }
  }
  return resultList;
};
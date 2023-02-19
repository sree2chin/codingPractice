/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
  var strsLen = strs.length;
  if (strsLen === 0) {
    return '';
  }
  if (strsLen === 1) {
    return strs[0];
  }
  var commonString = '';
  var i = 0;
  var otherCharFound = false;
  while(!otherCharFound) {
    var firstStringChar = strs[0][i];
    if (firstStringChar) {
      var char = '';
      for(var j = 1; j<strsLen; j++) {
        char = strs[j][i];
        if (char && char === firstStringChar) {
          if(j === strsLen - 1) {
            commonString = commonString + firstStringChar;
          }
        } else {
          otherCharFound = true;
          break;
        }
      }
    } else {
      break;
    }
    i++;
  }
  return commonString;
};

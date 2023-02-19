/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    var temp = x;
    var r;
    var sum = 0;
    while (temp > 0) {
      r = temp%10;
      sum = (sum*10)+r;
      temp=temp/10;
    }
    debugger;
    return x === sum;
};
/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var diameterOfBinaryTree = function(root) {
  if (root.left === null && root.right === null) return 0;
  let diameter = 0;
  let recurHeight = (root) => {
      if (root === null) {
          return 0;
      }

      const leftDiameter = recurHeight(root.left);
      const rightDiameter = recurHeight(root.right);
      diameter = Math.max(diameter, (leftDiameter + rightDiameter));
      const result = Math.max(leftDiameter, rightDiameter) + 1;
      return result;
  }
  recurHeight(root);
  return diameter;
};

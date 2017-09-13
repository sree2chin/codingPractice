// C program to demonstrate insert operation in binary search tree
#include <iostream>
using namespace std;
  
struct node
{
    int key;
    struct node *left, *right;
};
  
// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
  
// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}
  
/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);
 
    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   
 
    /* return the (unchanged) node pointer */
    return node;
}

// find if the given key is in the tree.
bool isFound(struct node* node, int key) {
    if(node == NULL) {
        return false;
    }
    if(node -> key == key) {
        return true;
    }
    else if (node -> key > key) {
        return isFound(node -> left, key);
    } 
    else {
        return isFound(node -> right, key);
    }
}

bool pathSumPresent(struct node* node, int sum) {
    if(node == NULL) {
        return (sum == 0);
    } else {
        return pathSumPresent(node -> left, sum - node -> key) || pathSumPresent(node -> right, sum - node -> key);
    }
}
  
// Driver Program to test above functions
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    int x;
    // cout << "please enter number: ";
    // cin >> x;
    // cout << isFound(root, x) << endl;
    int y;
    cout << "enter number for path sum present: " << endl;
    cin >> y;
    bool pathSum = pathSumPresent(root, y);
    cout << "pathSumFlag: ";
    cout << pathSum << endl;
    // print inoder traversal of the BST
    // inorder(root);
  
    return 0;
}
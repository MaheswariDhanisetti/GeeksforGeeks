/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {

  public:
  
   struct info{
     public:
        int hg;
        int sum;
   };
  
    info solve(Node* root ,int sum){
        
        if(root==NULL) return {0,0};
        
        int maxhg = 0 ,  maxsm = 0;
        
        info lf = solve(root->left   , sum+root->data);
        info rg = solve(root->right , sum+root->data);
        
        maxhg = max(lf.hg , rg.hg)+1;
        
        if(lf.hg > rg.hg){
            maxsm = lf.sum;
        }
        else if(lf.hg < rg.hg){
            maxsm = rg.sum;
        }
        else{
            maxsm = max(lf.sum  , rg.sum);
        }
        
        return {maxhg , maxsm+root->data};
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
        return solve(root , 0 ).sum;
    }
};
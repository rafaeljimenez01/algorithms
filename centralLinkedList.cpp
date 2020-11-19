
 class LLNode {
      public:
         int val;
          LLNode *next;
  };
 
LLNode* solve(LLNode* node, int target) {
    LLNode* last;
    LLNode* root = node;
    while(root != nullptr && root->next != nullptr){
        if(root->val == target){
            last = node;
        }
        root = root->next;
    }
return last;
}
int main(){

    return 0;
}
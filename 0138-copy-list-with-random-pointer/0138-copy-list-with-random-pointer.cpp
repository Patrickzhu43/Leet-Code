/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    Node* build(Node* head, unordered_map<Node*,Node*>& built){
        if(head==NULL) return NULL;
        if(built[head]) return built[head];
        Node* copy_head=new Node(head->val);
        built[head]=copy_head;
        copy_head->next=build(head->next,built);
        copy_head->random=build(head->random,built);
        return copy_head;
    }
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> built;
        return build(head, built);
    }
};
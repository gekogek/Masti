void deleteNode(Node *node)
{   Node* p=node->next;
   node->data=p->data;
   node->next=p->next;
   delete(p);
   // Your code here
}

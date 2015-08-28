/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *cur=NULL,*temp=new Node();
    cur=head;
    if(position--==0)
    {
         temp->data=data;
        if(head=NULL)
            temp->next=NULL;
        else
            temp->next=cur;
        head=temp;
    }
    else
    {
    
        while(position!=0&&cur->next!=NULL)
        {
            position--;
            cur=cur->next;
        }
        temp->data=data;
        temp->next=cur->next;
        cur->next=temp;
    }
    return head;
    
}


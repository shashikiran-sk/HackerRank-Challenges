#include<iostream.h>
using namespace std;
 struct Node
  {
     int data;
     struct Node *next;
  }
Node* Delete(Node *head, int position)
{
    Node *cur=head->next,*prev=head;
    if(position==0)
        if(head->next==NULL)
            return NULL;
        else
        {
            return head->next;
        }
    else
        {
        position--;
        while(position!=0)
        {    
            cur=cur->next;
            prev=prev->next;
            position--;
        }
        prev->next=cur->next;
        return head;
    }
}


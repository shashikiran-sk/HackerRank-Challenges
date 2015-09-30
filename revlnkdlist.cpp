/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  
       
    int a[1000],count=0;
    Node *cur=head;
    while(cur!=NULL)
    {
    	a[count++]=cur->data;
        cur=cur->next;
        
    }
    for(int i=count-1;i>=0;i--)
        cout<<a[i]<<endl;
     /*
     
    if (head == NULL) return;

    ReversePrint(head -> next);
    cout << head -> data << endl; */
}





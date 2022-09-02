 //Time Complexity O(n) space Complexity O(1)  
  public static void removeLoop(Node head){
        // code here
        // remove the loop without losing any nodes
        Node prev=head;
        Node slow=head;
        Node fast=head;
        
        while(fast!=null && fast.next!=null)
       {    prev=slow; //store the previous index so that we came to know which link needs to remove to remove link
            slow=slow.next;
            fast=fast.next.next;
            
            if(fast==slow)
                break;
       }
       
       if(slow==fast){
           fast=head;
           while(slow!=fast){
            prev=slow;
            slow=slow.next;
            fast=fast.next;
           }
           
           prev.next=null;
       }
       else
            return;
        
    }
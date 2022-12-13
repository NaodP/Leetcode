public /**
* Definition for singly-linked list.
* public class ListNode {
*     int val;
*     ListNode next;
*     ListNode() {}
*     ListNode(int val) { this.val = val; }
*     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
* }
*/
class Solution {
   public ListNode removeElements(ListNode head, int val){
       ListNode fake = new ListNode();
       fake.next = head;
       ListNode curr = fake;
       
       while(curr.next != null){
           if(curr.next.val == val) curr.next = curr.next.next;
           else curr = curr.next;
       }
       
       return fake.next;
   }
} 203. Remove Linked List Elements {
    
}

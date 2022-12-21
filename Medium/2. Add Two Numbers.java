/**
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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        boolean carry = false, firstTime = true;
        int val = 0;
        ListNode answer = new ListNode(0,null);
        ListNode temp1 = new ListNode(0,null);
        ListNode temp2 = new ListNode(0,null);
        ListNode prev = new ListNode(0,null);
        
        while(l1 != null || l2 != null){ //
            if(l1 == null){
                val = l2.val;
            }
            else if(l2 == null){
                val = l1.val;
            }
            else{
                val = l1.val + l2.val;
            }
            
            if(carry){
                val++;
            }

            if(val > 9){
                val = Math.abs(10 - val);
                carry = true;
            }
            else{
                carry = false;
            }
            
            prev = temp1;
            temp1.val = val;
            temp1.next = temp2;

            if(firstTime){
                answer = temp1;
                firstTime = false;
            }
            
            temp1 = temp2;
            temp2 = new ListNode(0,null);
            
            if(l1 != null){
                l1 = l1.next;
            }
            if(l2 != null){
                l2 = l2.next;
            }
        }
        
        if(carry){
            temp1.val = 1;
        }
        else{
            prev.next = null;
        }
        
        System.out.println(temp1.val);
        
        return answer;
    }
}
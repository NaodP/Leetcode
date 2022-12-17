/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} left
 * @param {number} right
 * @return {ListNode}
 */
var reverseBetween = function(head, left, right){
    if(head == null){return head;}

    let dummy = new ListNode(0, head);
    let previous = dummy;

    for(let i = 0; i < left-1; i++){
        previous = previous.next;
    }

    let current = previous.next;
    let after = current.next;

    for(let i = left; i < right; i++){
        current.next = after.next;
        after.next = previous.next;
        previous.next = after;
        after = current.next;
    }


    return dummy.next;
};
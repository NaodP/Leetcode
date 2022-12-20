# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        val = 0
        stack = []
        fast = slow = head

        while fast:
            stack.append(slow.val)
            slow = slow.next
            fast = fast.next.next
        
        while slow:
            val = max(val, stack.pop()+slow.val)
            slow = slow.next
        
        return val
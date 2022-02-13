#
# @lc app=leetcode id=19 lang=python3
#
# [19] Remove Nth Node From End of List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        s,e=head,head
        for _ in range(n):
            if e.next!=None:
                e=e.next
            else:
                s=s.next
                return s
        while e.next!=None:
            s=s.next
            e=e.next
        s.next=s.next.next
        return head
# @lc code=end


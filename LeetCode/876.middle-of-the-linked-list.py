#
# @lc app=leetcode id=876 lang=python3
#
# [876] Middle of the Linked List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        l=1
        temp=head.next
        while temp!=None:
            head=head.next
            if temp.next!=None:
                temp=temp.next.next
            else:
                break
        return head


# @lc code=end


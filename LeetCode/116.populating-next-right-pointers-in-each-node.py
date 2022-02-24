#
# @lc app=leetcode id=116 lang=python3
#
# [116] Populating Next Right Pointers in Each Node
#

# @lc code=start
"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

import queue


class Solution:
    def connect(self, root: 'Optional[Node]') -> 'Optional[Node]':
        queue=[]
        explore=[root]
        if root==None:
            return root 
        else:
            while(explore):
                queue=explore
                explore=[]
                while(len(queue)!=0):
                    node=queue.pop(0)
                    if node.left!=None:
                        explore.append(node.left)
                        explore.append(node.right)
                    if len(queue)==0:
                        node.next=None
                        continue
                    else:
                        node.next=queue[0]
            return root
# @lc code=end


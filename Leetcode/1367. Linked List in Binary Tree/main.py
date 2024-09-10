from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def isSubPath(self, head: Optional[ListNode], root: Optional[TreeNode]) -> bool:
        if head == None:
            return True
        if root == None:  # Add this check
            return False
        else:
            test = False
            if root.val == head.val:
                test = self.recurse(head, root)
            if (root.left == None and root.right == None):
                return test
            elif (root.left == None):
                return self.isSubPath(head, root.right) or test
            elif (root.right == None):
                return self.isSubPath(head, root.left) or test
            else:
                return self.isSubPath(head, root.left) or self.isSubPath(head, root.right) or test

    def recurse(self, head: Optional[ListNode], root: Optional[TreeNode]):
        if root == None:
            return False
        if root.val == head.val:
            if head.next == None:
                return True
            else:
                if (root.left == None and root.right == None):
                    return False
                elif (root.left == None):
                    return self.recurse(head.next, root.right)
                elif (root.right == None):
                    return self.recurse(head.next, root.left)
                else:
                    return self.recurse(head.next, root.left) or self.recurse(head.next, root.right)
        else:
            return False
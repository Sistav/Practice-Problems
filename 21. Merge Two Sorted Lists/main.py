# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        return None if (list1 == None and list2 == None) else list2 if (list1 == None) else list1 if (list2 == None) else (ListNode(list1.val, Solution().mergeTwoLists(list1.next, list2))) if list1.val < list2.val else (ListNode(list2.val, Solution().mergeTwoLists(list1, list2.next)))
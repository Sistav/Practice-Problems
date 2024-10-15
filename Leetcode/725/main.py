# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def splitListToParts(self, head: Optional[ListNode], k: int) -> List[Optional[ListNode]]:
        length = 0
        current = head
        while current:
            length += 1
            current = current.next

        base_size = length // k
        extra = length % k
        out = [None] * k

        current = head
        for i in range(k):
            out[i] = current

            size = base_size + (1 if i < extra else 0)

            for _ in range(size - 1):
                if current:
                    current = current.next

            if current:
                next_node = current.next
                current.next = None
                current = next_node

        return out
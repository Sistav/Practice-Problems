struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *insertGreatestCommonDivisors(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *current = head;

    do {
        int a = current->val;
        int b = current->next->val;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        struct ListNode *idk = (struct ListNode *) malloc(sizeof(struct ListNode));
        idk->val = a;

        idk->next = current->next;
        current->next = idk;

        current = idk->next;
    } while (current != NULL && current->next != NULL);

    return head;
}

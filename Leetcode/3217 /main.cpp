
#define HASH_SIZE 100000
#include <math.h>

typedef struct {
    int* table;
    int size;
} HashSet;




HashSet* createHashSet(int size) {
    HashSet* set = (HashSet*)malloc(sizeof(HashSet));
    set->table = (int*) calloc(size, sizeof(int));
    set->size = size;
    return set;
}

void insert(HashSet* set, int key) {
    int index = abs(key) % set->size;
    set->table[index] = 1;
}

bool contains(HashSet* set, int key) {
    int index = abs(key) % set->size;
    return set->table[index] == 1;
}



struct ListNode* modifiedList(int* nums, int numsSize, struct ListNode* head) {
    struct ListNode* current = head;
    struct ListNode* previous = NULL;
    HashSet* set = createHashSet(HASH_SIZE);
    for (int i = 0; i < numsSize; i++) {
        insert(set, nums[i]);
    }
    do {
        if (contains(set, current->val)) {
            if (current == head) {
                head = current->next;
                current = head;
            } else {
                previous->next = current->next;
                current = current->next;
            }
        } else {
            previous = current;
            current = current->next;
        }
    } while (current != NULL);
    return head;
}
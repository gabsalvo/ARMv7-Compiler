.text
.global merge
.type merge, %function

merge:
    PUSH {r4-r7, lr}         @ salva temporanei + link

    MOV r4, r0               @ r4 = a
    MOV r5, r1               @ r5 = b
    MOV r6, #0               @ r6 = head (inizialmente NULL)
    MOV r7, #0               @ r7 = tail (inizialmente NULL)

loop_merge:
    CMP r4, #0
    BEQ copy_b_remaining
    CMP r5, #0
    BEQ copy_a_remaining

    LDR r0, [r4]             @ r0 = a->value
    LDR r1, [r5]             @ r1 = b->value
    CMP r0, r1
    BLT take_a               @ if a->val < b->val → prendi a
    B   take_b               @ else → prendi b

take_a:
    MOV r0, #8
    BL malloc
    LDR r2, [r4]             @ r2 = a->value
    STR r2, [r0]             @ new_node->value = a->value
    LDR r4, [r4, #4]         @ avanza a = a->next
    B   attach_node

take_b:
    MOV r0, #8
    BL malloc
    LDR r2, [r5]             @ r2 = b->value
    STR r2, [r0]             @ new_node->value = b->value
    LDR r5, [r5, #4]         @ avanza b = b->next
    B   attach_node

attach_node:
    MOV r2, r0               @ r2 = new_node

    STR    #0, [r2, #4]      @ new_node->next = NULL (precauzione)

    CMP r6, #0
    BEQ set_head             @ se head == NULL → primo nodo
    STR r2, [r7, #4]         @ tail->next = new_node
    MOV r7, r2               @ tail = new_node
    B loop_merge

set_head:
    MOV r6, r2               @ head = new_node
    MOV r7, r2               @ tail = new_node
    B loop_merge

copy_a_remaining:
    CMP r4, #0
    BEQ end_merge

copy_a_loop:
    MOV r0, #8
    BL malloc
    LDR r2, [r4]             @ r2 = a->value
    STR r2, [r0]             @ new_node->value = a->value
    MOV r3, r0               @ r3 = new_node
    STR #0, [r3, #4]         @ new_node->next = NULL
    CMP r6, #0
    BEQ set_head_a_tail
    STR r3, [r7, #4]
    MOV r7, r3
    LDR r4, [r4, #4]
    CMP r4, #0
    BNE copy_a_loop
    B end_merge

set_head_a_tail:
    MOV r6, r3
    MOV r7, r3
    LDR r4, [r4, #4]
    CMP r4, #0
    BNE copy_a_loop
    B end_merge

copy_b_remaining:
    CMP r5, #0
    BEQ end_merge

copy_b_loop:
    MOV r0, #8
    BL malloc
    LDR r2, [r5]             @ r2 = b->value
    STR r2, [r0]             @ new_node->value = b->value
    MOV r3, r0               @ r3 = new_node
    STR #0, [r3, #4]         @ new_node->next = NULL
    CMP r6, #0
    BEQ set_head_b_tail
    STR r3, [r7, #4]
    MOV r7, r3
    LDR r5, [r5, #4]
    CMP r5, #0
    BNE copy_b_loop
    B end_merge

set_head_b_tail:
    MOV r6, r3
    MOV r7, r3
    LDR r5, [r5, #4]
    CMP r5, #0
    BNE copy_b_loop
    B end_merge

end_merge:
    MOV r0, r6               @ ritorna la testa della lista finale
    POP {r4-r7, pc}

.text
.global trova_max_idx
.type trova_max_idx, %function

@ int trova_max_idx(int *arr, int n)

trova_max_idx:
    push {r4, r5, lr}
    cmp r1, #0
    beq vuoto

    mov r5, #0          @ r5 = indice corrente
    ldr r2, [r0], #4    @ r2 = max_val (primo valore)
    mov r3, #0          @ r3 = max_idx
    subs r1, r1, #1     @ n-- (già letto il primo)

loop:
    cmp r1, #0
    beq fine

    ldr r4, [r0], #4    @ r4 = arr[i]
    add r5, r5, #1      @ indice++

    cmp r4, r2
    movgt r2, r4
    movgt r3, r5

    subs r1, r1, #1
    b   loop

vuoto:
    mov r0, #-1
    pop {r4, r5, lr}
    bx lr

fine:
    mov r0, r3
    pop {r4, r5, lr}
    bx lr

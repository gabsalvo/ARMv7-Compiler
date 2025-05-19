        .text
        .global copia_array
        .type copia_array, %function

@ int* copia_array(int *arr, int n)
copia_array:
    push {r4, r5, r6, lr}    @ salviamo i registri che useremo

    mov   r2, r0             @ r2 = ptr sorgente (arr)
    mov   r3, r1             @ r3 = n (numero elementi)
    cmp   r3, #0
    beq   .zero              @ se n == 0 → ritorna NULL

    lsl   r0, r3, #2         @ r0 = n * 4 byte da allocare
    bl    malloc             @ malloc(r0)
    mov   r1, r0             @ r1 = ptr destinazione

.copy_loop:
    subs  r3, r3, #1         @ r3--, controlla post-decremento
    ldr   r4, [r2], #4       @ r4 = *sorgente; r2 += 4
    str   r4, [r1], #4       @ *dest = r4; r1 += 4
    bne   .copy_loop         @ se r3 != 0 ripeti

    mov   r0, r1             @ r0 = ptr inizio buffer (return)
    pop   {r4, r5, r6, lr}
    bx    lr

.zero:
    mov   r0, #0             @ return NULL se n == 0
    pop   {r4, r5, r6, lr}
    bx    lr

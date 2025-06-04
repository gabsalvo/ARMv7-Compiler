.text
.global lenOccorrenze
.type lenOccorrenze, %function

lenOccorrenze:
    push {r4}
    mov r4, r0        @ r4 = base del vettore
    mov r12, #0       @ r12 = somma totale

loop:
    cmp r1, #0
    beq fine_loop

    ldr r3, [r4]      @ r3 = elem.k
    cmp r3, r2        @ confronto con key
    bne skip          @ se diverso, passa al prossimo

    ldr r0, [r4, #4]  @ r0 = elem.s (puntatore a stringa)

conta:
    ldrb r3, [r0], #1
    cmp r3, #0
    beq fconta
    add r12, r12, #1
    b conta

fconta:
skip:
    add r4, r4, #8    @ passa al prossimo elemento
    sub r1, r1, #1    @ N--
    b loop

fine_loop:
    mov r0, r12
    pop {r4}
    bx lr

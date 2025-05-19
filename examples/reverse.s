.text
.global reverse
.type reverse, %function

reverse:
    mov r1, #4
    add r1, r1, r0
    sub r1, r1, #1

loop:
    cmp r0, r1
    bhs fine

    ldrb r2, [r0]
    ldrb r3, [r1]
    strb r2, [r1]
    strb r3, [r0]

    add r0, r0, #1
    sub r1, r1, #1
    b loop

fine:
     mov pc, lr

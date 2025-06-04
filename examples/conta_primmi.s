.text
.global conta_primi
.type conta_primi, %function

@ int conta_primi(int *A, int n)

conta_primi:
		push {lr}
		mov r3, r0
		mov r2, #0 @ counter
		cmp r1, #0
		beq fine

loop:
		ldr r0, [r3], #4
		bl is_prime
		cmp r0, #1
		addeq r2, r2, #1

		subs r1, r1, #1
		bne loop

fine:
		mov r0, r2
		pop {lr}
		mov pc, lr
		

@ funzione locale

is_prime:
    push {r4, r5, r6, r7, lr}  @ salviamo tutto ciò che usiamo

    cmp r0, #2
    blt not_prime             @ n < 2 → not prime
    beq prime                 @ n == 2 → prime

    mov r4, #2                @ r4 = d (divisor)
    mov r5, r0                @ r5 = n (original)

loo:
    mul r6, r4, r4            @ r6 = d*d
    cmp r6, r5
    bgt prime                 @ se d*d > n → è primo

    mov r6, r5                @ r6 = n
    udiv r7, r6, r4           @ r7 = n / d
    mul r7, r7, r4            @ r7 = (n/d)*d
    cmp r7, r5
    beq not_prime             @ se n % d == 0 → non primo

    add r4, r4, #1            @ d++
    b loo

not_prime:
    mov r0, #0
    pop {r4, r5, r6, r7, lr}
    mov pc, lr

prime:
    mov r0, #1
    pop {r4, r5, r6, r7, lr}
    mov pc, lr

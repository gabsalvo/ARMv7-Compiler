.text
.global binsearch
.type binsearch, %function

@ int binsearch(int *A, int n, int k)
@ r0 = A, r1 = n, r2 = k

binsearch:
		push {r4, r5, r6, lr}

		cmp r1, #0
		beq .not_found

		mov r3, #0 @ low
		subs r4, r1, #1 @ high = n -1

.loop:
		cmp r3, r4 @ low > high?
		bgt .not_found

		add r5, r3, r4 @ tmp = low + high
		asr r5, r5, #1

		lsl r6, r5, #2
		add r6, r0, r6
		ldr r6, [r6]

		cmp r2, r6
		beq .found
		blt .go_left

		@ key > A[mid]
		add r3, r5, #1
		b .loop

.go_left:
		subs r4, r5, #1
		b .loop

.found:
		mov r0, r5
		pop {r4, r5, r6, lr}
		mov pc, lr
		
.not_found:
        mov     r0, #-1             @ return -1
        pop     {r4, r5, r6, lr}
        mov pc, lr

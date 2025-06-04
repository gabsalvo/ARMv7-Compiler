.text
.global rol
.type rol, %function

@ uint32_t rol(uint32_t x, int k)

rol:
	push {r4}
	mov r3, #32
	lsl r2, r0, r1 @ x << k
	sub r3, r3, r1
	lsr r4, r0, r3

	orr r0, r2, r4
	pop {r4}
	mov pc, lr

.text
.global ce
.type ce, %function

@ int ce(int x, int *v, int n)

ce:
		cmp r2, #0
		beq no

loop:
		ldr r3, [r1], #4
		cmp r0, r3
		beq yes

		subs r2, r2, #1
		beq no

		b loop

yes:
		mov r0, #1
		mov pc, lr
no:
		mov r0, #0
		mov pc, lr

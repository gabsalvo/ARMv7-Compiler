.text
.global compute_row
.type compute_row, %function

@ int compute_row(int *r, int n)

compute_row:
		ldr r2, [r0], #4
loop:
		subs r1, r1, #1
		beq fine
		
		ldr r3, [r0], #4
		cmp r3, r2
		bgt loop

		mov r2, r3
		
		b loop

fine:
		mov r0, r2
		mov pc, lr

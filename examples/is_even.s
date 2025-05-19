.text
.global is_even
.type is_even, %function

@ int is_even(int x)

is_even:
		ands r1, r0, #1
		moveq r0, #1
		movne r0, #0

		mov pc, lr
		

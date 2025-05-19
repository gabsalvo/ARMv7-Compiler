.text
.global rotate_left
.type rotate_left, %function

@ int rotate_left(int x, int n) n = 3
@ x        = 10000000 00000000 00000000 00000001
@ result   = 00000000 00000000 00000000 00001001
@          = 0x34567812

rotate_left:
		push {r4}
		
		mov r4, #32
		sub r4, r4, r1
		
		lsl r2, r0, r1
		lsr r3, r0, r4
		orr r0, r2, r3

		pop {r4}
		mov pc, lr

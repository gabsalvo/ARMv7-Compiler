.text
.global set_bit
.type set_bit, %function

@ int set_bit (int x, int pos)

set_bit:
		mov r2, #1
		lsl r2, r2, r1
		orr r0, r0, r2

		mov pc, lr
		

.text
.global clear_bit
.type clear_bit, %function

@ int clear_bit(int x, int pos)

clear_bit:
		mov r2, #1
		lsl r2, r2, r1
		mvn r2, r2

		and r0, r0, r2

		mov pc, lr

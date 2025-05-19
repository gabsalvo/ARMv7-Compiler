.text
.global get_bit
.type get_bit, %function

@ int get_bit(int x, int pos)

get_bit:
		lsr r2, r0, r1
		and r2, r2, #1

		mov r0, r2

		mov pc, lr
		

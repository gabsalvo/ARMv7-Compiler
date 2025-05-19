.text
.global reverse_bits
.type reverse_bits, %function

@ int reverse_bits(int x)

reverse_bits:
		push {r4}
		mov r1, #0  @ lsb
		mov r2, #0  @ msb
		mov r3, #32 @ conto
		mov r4, #0  @ final 
		
loop:
		lsl r4, r4, #1
		and r1, r0, #1

		add r4, r4, r1 
		lsr r0, r0, #1

		subs r3, r3, #1
		bne loop

		mov r0, r4
		pop {r4}
		mov pc, lr

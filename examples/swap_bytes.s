.text
.global swap_bytes
.type swap_bytes, %function

@ int swap_bytes(int x)
@ 0x1234 -> 0x3412

swap_bytes:
		mov r1, #0 
		mov r2, #0
		mov r3, #0

		lsl r1, r0, #16 @ 0x0012
		lsr r2, r0, #16 @ 0x3400

		orr r3, r1, r2
		mov r0, r3
		mov pc, lr

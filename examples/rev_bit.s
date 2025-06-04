.text
.global reverse_bits
.type reverse_bits, %function

@ uint8_t reverse_bits(uint8_t x)

reverse_bits:
		push {lr}

		mov r1, #0
		mov r2, #0

loop:
		cmp r2, #8
		beq done

		mov r3, r0
		lsr r3, r3, r2
		and r3, r3, #1

		lsl r3, r3, #7
		lsr r3, r3, r2

		orr r1, r1, r3

		and r2, r2, #1
		b loop

done:
		mov r0, r1
		pop {lr}
		mov pc, lr

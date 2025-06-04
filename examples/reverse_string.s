.text
.global reverse
.type reverse, %function

@ void reverse(char *s)

reverse:
		push {r4, r5, lr}

		mov r4, r0 @ base pointer
		mov r1, r0 @ arg per strlen
		bl strlen

		add r5, r4, r0 @ r5 = base + length
		sub r5, r5, #1 @ ultimo indice

loop:
		cmp r4, r5
		beq done

		ldrb r2, [r4]
		ldrb r3, [r5]
		
		strb r3, [r4]
		strb r2, [r5]

		add r4, r4, #1
		sub r5, r5, #1
	
		b loop

done:
		pop {r4, r5, lr}
		mov pc, lr

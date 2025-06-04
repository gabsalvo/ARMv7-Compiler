.text 
.global hash
.type hash, %function

@ int hash(char *s)

hash:	
		cmp r0, #0
		beq fine
		mov r1, #0 @ res contatore

loop:	
		ldrb r2, [r0], #1
		cmp r2, #0
		beq fine

		and r3, r2, #3
		lsl r1, r1, #2
		add r1, r1, r3

		b loop

fine:
		and r1, r1, #15
		mov r0, r1
		mov pc, lr
		

.text
.global first_occurrence
.type first_occurrence, %function

@ int first_occurrence(char *s, char c)

first_occurrence:
		mov r2, #0
		cmp r0, #0
		beq non_trovato

loop:	
		ldrb r3, [r0], #1
		cmp r3, r1
		beq trovato

		cmp r3, #0
		beq non_trovato

		add r2, r2, #1
		b loop

trovato:
		mov r0, r2
		mov pc, lr

non_trovato:
		mov r0, #-1
		mov pc, lr
		mov pc, lr
		
		

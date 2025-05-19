.text
.global conta_vocali
.type conta_vocali, %function

@ int conta_vocali(char *s) *s -> r0

conta_vocali:
		mov r1, #0

loop:
		ldrb r2, [r0], #1
		cmp r2, #0
		beq fine
		
		cmp r2, #97
		beq vocale
		cmp r2, #101
		beq vocale
		cmp r2, #105
		beq vocale
		cmp r2, #111
		beq vocale
		cmp r2, #117
		beq vocale
		b loop

vocale:
		add r1, r1, #1
		b loop

fine:
		mov r0, r1
		mov pc, lr

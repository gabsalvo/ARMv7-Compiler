.text
.global lunghezza_stringa
.type lunghezza_stringa, %function

@ int lunghezza_stringa(char *s) *s -> r0

lunghezza_stringa:
		cmp r0, #0
		beq fine
		mov r1, #0

loop:
		ldrb r2, [r0]
		cmp r2, #0
		beq fine
		add r1, r1, #1
		add r0, r0, #1
		b loop

fine: 	
		mov r0, r1
		mov pc, lr

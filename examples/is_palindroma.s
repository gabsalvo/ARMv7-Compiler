.text

@ int lunghezza_stringa(char *s)

lunghezza_stringa:
		mov r1, #0
		cmp r0, #0
		beq l_fine

l_loop:
		ldrb r2, [r0], #1
		cmp r2, #0
		beq l_fine
		add r1, r1, #1
		b l_loop

l_fine:
		mov r0, r1
		mov pc, lr
	

.global is_palindroma
.type is_palindroma, %function

@ int is_palindroma(char *s)
	
is_palindroma:
		push {r4, lr}
		
		mov r4, r0

		mov r0, r4
		bl lunghezza_stringa
		cmp r0, #0
		beq si
		
		sub r2, r0, #1 @ indice finale del char
		add r2, r4, r2
		mov r1, r4

loop:	
		cmp r1, r2
		bgt si
		
		ldrb r3, [r1]
		ldrb r4, [r2]

		cmp r3, r4
		bne no
		
		add r1, r1, #1
		sub r2, r2, #1
		b loop


no:
		mov r0, #0
		pop {r4, lr}
		mov pc, lr

si:
		mov r0, #1
		pop {r4, lr}
		mov pc, lr

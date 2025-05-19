.text
.global conta_nodi
.type conta_nodi, %function

@ int conta_nodi(strcut Node *head) 
@ struct Node {
@		int val
@		struct Node *next
@ }

conta_nodi:
		mov r1, #0
		
loop:
		cmp r0, #0
		beq fine

		add r1, r1, #1
		
		ldr r2, [r0, #4]
		mov r0, r2
		b loop

fine:
		mov r0, r1
		mov pc, lr

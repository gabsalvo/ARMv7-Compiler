.text
.global somma_valori
.type somma_valori, %function

@ struct Node {
@ 		int val
@		struct Node *next
@ }
@ int somma_valori(struct Node *head)

somma_valori:
		mov r1, #0

loop:
		cmp r0, #0
		beq fine

		ldr r2, [r0]
		add r1, r1, r2

		ldr r2, [r0, #4]
		mov r0, r2
		b loop

fine:
		mov r0, r1
		mov pc, lr

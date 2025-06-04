.text
.global somma_prodotti
.type somma_prodotti, %function

@ int somma_prodotti(Prodotto* A, int n)

somma_prodotti:
		push {lr}
		
		mov r2, #0 @ contatore
		cmp r1, #0
		beq .fine
		
.loop:
		ldr r3, [r0, #4]
		add r2, r2,  r3

		add r0, r0, #8
		subs r1, r1, #1
		bne .loop

.fine:
		mov r0, r2
		pop {lr}
		mov pc, lr

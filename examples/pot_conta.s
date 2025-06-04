.global conta
.type conta, %function

@ int conta(int n) 

conta:
		mov r1, #32
		mov r2, #0

loop:
		and r3, r0, #1
		cmp r3, #0
		beq piu

		lsr r0, r0, #1

		subs r1, r1, #1
		beq fine

		b loop

piu:
		add r2, r2, #1
		subs r1, r1, #1
		beq fine

		b loop

fine:
		mov r0, r2
		mov pc, lr
		

.global pot
.type pot, %function

@ int pot(int n) 

pot:
		bl conta
		and r1, r0, #1
		cmp r0, #1
		moveq r0, #1
		movne r0, #0
		

		mov pc, lr

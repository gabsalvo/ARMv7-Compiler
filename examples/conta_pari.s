.text
.global conta_pari
.type conta_pari, %function

@ int conta_pari(int *arr, int n) *arr -> r0 n -> r1

conta_pari:
		push {r4}
		mov r2, #0
		
		cmp r1, #0
		beq fine

loop:
		ldr r3, [r0], #4
		and r4, r3, #1
		cmp r4, #0
		addeq r2, r2, #1
		
		subs r1, r1, #1
		beq fine
		b loop

fine:
		mov r0, r2
		pop {r4}
		mov pc, lr

.text
.global somma_array
.type somma_array, %function

@ int somma_array (int *arr, int n) *arr -> r0, n -> r1

somma_array:
		cmp r1, #0
		beq fine
		mov r2, #0

loop:
		ldr r3, [r0], #4
		add r2, r2, r3
		subs r1, r1, #1
		beq fine
		b loop

fine:
		mov r0, r2
		mov pc, lr
		

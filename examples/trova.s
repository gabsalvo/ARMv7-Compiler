.text
.global trova
.type trova, %function

@ int trova(int *arr, int n, int target) r0 -> *arr, r1 ->  n, r2 -> target

trova:
		cmp r1, #0
		beq no

loop:
		ldr r3, [r0], #4
		cmp r3, r2
		beq si

		subs r1, r1, #1
		beq no
		b loop
no:
		mov r0, #0
		mov pc, lr

si:
		mov r0, #1
		mov pc, lr

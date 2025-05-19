.text
.global inverti_array
.type inverti_array, %function

@ int inverti_array(int *arr, int n) : *arr -> r0, n -> r1

inverti_array:
		push {r4, r5, r6, r7}
		cmp r1, #1
		ble fine_swap
		
		mov r2, #0
		sub r3, r1, #1

loop:
		cmp r2, r3
		bge fine_swap

		ldr r4, [r0, r2, LSL #2]
		ldr r5, [r0, r3, LSL #2]

		str r5, [r0, r2, LSL #2]
		str r4, [r0, r3, LSL #2]

		add r2, r2, #1
		sub r3, r3, #1
		b loop

fine_swap:
		mov r0, #1
		pop {r4, r5, r6, r7}
		mov pc, lr

		
		

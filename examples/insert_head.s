.text
.global insert_head
.type insert_head, %function

insert_head:
		push {lr}
		mov r2, r0 @ in r2 ce il puntatore alla lista
		mov r0, #8
		bl malloc

		ldr r3, [r2]

		str r1, [r0]
		str r3, [r0, #4]
		str r0, [r2]

		pop {lr}
		mov pc, lr

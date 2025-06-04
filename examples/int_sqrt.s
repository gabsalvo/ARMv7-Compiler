.text
.global int_sqrt
.type int_sqrt, %function

@ int int_sqrt(int n)

int_sqrt:
		mov r1, #0
		cmp r0, #0
		beq zero

loop:
		add r1, r1, #1
		mul r2, r1, r1

		cmp r2, r0
		ble loop

		sub r0, r1, #1
		mov pc, lr

zero:
		mov r0, #1
		mov pc, lr

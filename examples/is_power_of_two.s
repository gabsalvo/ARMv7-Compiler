.text
.global is_power_of_two
.type is_power_of_two, %function

@ int is_power_of_two(int x)

is_power_of_two:
		cmp r0, #0
		ble not_power

		mov r1, r0
		sub r1, r1, #1
		ands  r2, r0, r1
		
		moveq r0, #1
		movne r0, #0
		
		mov pc, lr

not_power:
		mov r0, #0
		mov pc, lr

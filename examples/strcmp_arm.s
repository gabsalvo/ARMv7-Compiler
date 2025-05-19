.text
.global strcmp_arm
.type strcmp_arm, %function

@ int strcmp_arm(char *a, char *b) 

strcmp_arm:
		push {r4, r5}
		mov r2, #0
		mov r3, #0
		
loop:
		ldrb r4, [r0]
		cmp r4, #0
		addne r2, r2, #1
		beq fine
		
		ldrb r5, [r1]
		cmp r5, #0
		addne r3, r3, #1 
		beq fine
		
		add r0, r0, #1
		add r1, r1, #1

		b loop

fine:
		cmp r4, r5
		beq si
		bgt ano
		blt asi

si:
		mov r0, #0
		pop {r4, r5}
		mov pc, lr

ano:
		mov r0, #1
		pop {r4, r5}
		mov pc, lr

asi:
		mov r0, #2
		pop {r4, r5}
		mov pc, lr
		

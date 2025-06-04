.text
.global mapl
.type mapl, %function

@ typedef struct __el { int v, struct __el *next } ELEM
@ void mapl(ELEM *p)

mapl:
		push { lr }
		mov r1, r0

loop:
		ldr r2, [r1]
		mov r0, r2

		bl fun
		str r0, [r1]

		ldr r2, [r1, #4]
		cmp r2, #0
		beq fine

		mov r1, r2
		b loop

fine:
		mov r0, r1
		pop { lr }
		mov pc, lr
		

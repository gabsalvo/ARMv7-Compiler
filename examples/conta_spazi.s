.text
.global conta_spazi
.type conta_spazi, %function

@ int conta_spazi (char *s)

conta_spazi:
		mov r1, #0
loop:
		ldrb r2, [r0]
		cmp r2, #0
		beq fine
		cmp r2, #32
		addeq r1, r1, #1
		add r0, r0, #1
		b loop

fine:
		mov r0, r1
		mov pc, lr

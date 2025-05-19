.text
.global count_ones
.type count_ones, %function

@ int count_ones(int x)

count_ones:
		mov r1, #0
		mov r2, #32
		mov r3, r0
loop:	
		and r3, r3, #1
		cmp r3,#1
		addeq r1, r1, #1
		lsr r0, r0, #1
		subs r2,r2, #1

		mov r3, r0
		
		bne loop

		mov r0, r1
		mov pc, lr

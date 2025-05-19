.text
.global merge_bytes
.type merge_bytes, %function

@ int merge_bytes(int a, int b)

merge_bytes:
		push {r4, r5, r6}
		and r2, r1, #0xFF @ abbiamo ultimo byte di b in posizione giusta

		lsr r3, r0, #8
		and r4, r3, #0xFF @ abbiamo byte giusto di a in posizione sbagliata

		lsl r5, r4, #8 @ ora posizione corretta di a

		orr r6, r5, r2

		mov r0, r6
		pop {r4, r5, r6}
		mov pc, lr
		

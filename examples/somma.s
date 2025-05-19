.text
.global somma
.type somma, %function

@ int somma(int a, int b) a = r0, b = r1

somma:
		add r2, r0, r1
		mov r0, r2
		mov pc, lr

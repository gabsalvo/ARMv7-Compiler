.text
.global massimo
.type massimo, %function

@ int massimo(int a, int b) -> a = r0, b = r1

massimo:
		cmp r0, r1
		movlt r0, r1
		mov pc, lr

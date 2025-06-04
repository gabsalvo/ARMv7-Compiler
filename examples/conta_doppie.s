.text
.global conta_doppie
.type  conta_doppie, %function

@ int conta_doppie(char *s)

conta_doppie:
    mov  r2, #0          @ r2 = conteggio doppie

loop:
    ldrb r3, [r0]        @ r3 = s[i]
    cmp  r3, #0          @ terminatore?
    beq  fine

    ldrb r1, [r0, #1]    @ r1 = s[i+1]
    cmp  r3, r1          @ *** confronto giusto ***
    addeq r2, r2, #1     @ se uguali, ++contatore

    add  r0, r0, #1      @ avanza di un solo byte
    b    loop

fine:
    mov  r0, r2
    mov  pc, lr

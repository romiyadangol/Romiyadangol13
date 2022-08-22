;Write a program to (a) load the accumulator with the value 55H and (b) complement the accumulator  100 times
ORG 0000H
MOV A,#55H
MOV R3,#10
NEXT: MOV R2,#70
AGAIN: CPL A
DJNZ R2,AGAIN
DJNZ R3,NEXT
END
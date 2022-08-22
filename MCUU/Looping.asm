;write a program to clear accumulator and add 3 to the accumulator ten times
ORG 0000H
MOV A,#0;A=0,clear ACC
MOV R2,#10 ; load counter R2=10
AGAIN:  ADD A,#03;add 03 to Acc
	DJNZ R2,AGAIN;repeat until R2=0
	MOV R5,A; Save A in R5
END
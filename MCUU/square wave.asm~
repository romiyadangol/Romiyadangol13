;In the program,create a square wave of 50% duty cycle(with equal portions high & low)on the p1.5 bit. Timer 0 is used to generate the time delay. Analyse the program,also calculate delay generated.assume XTAL=11.0592 MHz
MOV TMOD,#01; Timer0,mode 1 (16 bit mode)
HERE:   MOV TL0,#0F2H; TL0=F2H,the low byte
	MOV TH0,#0FFH;TH0=FFH the high byte
	CPL P1.5; TOGGLE P1.5;toggle P1.5 (CPL instruction logically complements the value of the 		specified destination operand & stores the result back in the destination operand)
	ACALL DELAY
	SJMP HERE; short jump
DELAY:
	SETB TR0;start timer 0
AGAIN:  JNB TF0,AGAIN; monitor timer flag 0 until it rolls over
	CLR TR0; stop timer 0
	CLR TF0;clear timer 0 flag
	RET;return from subroutine
END
ASSUME CS:CODE,DS:DATA
DATA SEGMENT
N1 DW 4444H
N2 DW 2222H
N3 DW 2 DUP(0)
DATA ENDS

CODE SEGMENT
START:
	MOV AX,DATA
	MOV DS,AX
	XOR DX,DX
	MOV AX,N1
	DIV N2
	MOV N3,AX
	MOV N3[2],DX
STOP:
	MOV AH,4CH
	INT 21H
CODE ENDS
END START

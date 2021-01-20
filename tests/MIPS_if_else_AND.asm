#	SCALPA Project
#	Output test code in MIPS
#	



.data
# In the section .data we establish data components such as 
# variables or strings to be displayed on the console. 

VAR_max_:	.word	0

STR_1:	.asciiz	 "success" 
STR_2:	.asciiz	 "fail" 
STR_3:	.asciiz	 "\nje suis encore ici : bref nextquad marche" 


.text
# In the section .text we put our executable code 

LABEL_0:
		j LABEL_1

LABEL_1:
		li $t0, 5
		li $t1, 6
		blt $t0, $t1, LABEL_3

LABEL_2:
		j LABEL_7

LABEL_3:
		li $t0, 1
		li $t1, 1
		beq $t0, $t1, LABEL_5

LABEL_4:
		j LABEL_7

LABEL_5:
		li $t1, 1
		sw $t1, VAR_max_

LABEL_6:
		j LABEL_9

LABEL_7:
		li $t1, 0
		sw $t1, VAR_max_

LABEL_8:
		j LABEL_9

LABEL_9:
		lw $a0, VAR_max_
		li $v0, 1
		syscall

LABEL_10:
		li $t0, 5
		li $t1, 6
		blt $t0, $t1, LABEL_12

LABEL_11:
		j LABEL_16

LABEL_12:
		li $t0, 1
		li $t1, 1
		beq $t0, $t1, LABEL_14

LABEL_13:
		j LABEL_16

LABEL_14:
		la $a0, STR_1
		li $v0, 4
		syscall

LABEL_15:
		j LABEL_18

LABEL_16:
		la $a0, STR_2
		li $v0, 4
		syscall

LABEL_17:
		j LABEL_18

LABEL_18:
		la $a0, STR_3
		li $v0, 4
		syscall

LABEL_END:
		li $v0, 10
		syscall

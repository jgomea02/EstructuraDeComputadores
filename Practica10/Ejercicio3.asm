.data
datos1: .half 4,7,2
	.align 2
	.word 1,-5
	.byte 4
	.align 1
	.half 3
	.align 2
	.word -3
	.space 2
	.byte 'c'
datos2: .byte 2,3,5,7

.text
.globl main
main:

la $t0, datos1

lw $t1, 8($t0)

lh $t2, 18($t0)

add $t3, $t1,$t2

sh $t3, 24($t0)

la $t0, datos2
lb $t1, -1($t0)

addi $t1,$t1,2

sb $t1, -11($t0)




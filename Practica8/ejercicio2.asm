.data
#datos
datos: .word 3,7
cad1: .asciiz "Escribe un numero A: " 
cad2: .asciiz "Escribe un numero B: " 
cad3: .asciiz "Escribe un numero C: " 
cad4: .asciiz "Escribe un numero D: " 
cad5: .asciiz "\nA + B = "
cad6: .asciiz "\nC - D = "
cad7: .asciiz "\nA + B + C + D = "
cad8: .asciiz "\nA elevado al cuadrado es "
cad9: .asciiz "\nA << 3 es  "
cad10: .asciiz "\nEl resto de 7 entre 3 es  "
.text
.globl main
main:
	li $v0,4	#Imprime cadena
	la $a0,cad1
	syscall

	li $v0,5
	syscall
	move $t0,$v0
	
	li $v0,4
	la $a0,cad2
	syscall
	
	li $v0,5
	syscall
	move $t1,$v0
	
	li $v0,4
	la $a0,cad3
	syscall
	
	li $v0,5
	syscall
	move $t2,$v0
	
	li $v0,4
	la $a0,cad4
	syscall
	
	li $v0,5
	syscall
	move $t3,$v0
	
	add $t4, $t0, $t1
	
	li $v0,4
	la $a0,cad5
	syscall
	
	move $a0, $t4
	li $v0,1
	syscall
	
	sub $t5, $t2, $t3
	
	li $v0,4
	la $a0,cad6
	syscall
	
	move $a0, $t5
	li $v0, 1
	syscall
	
	add $t6, $t4, $t2
	add $t7, $t6, $t3
	
	li $v0,4
	la $a0,cad7
	syscall
	
	move $a0, $t7
	li $v0,1
	syscall
	
	mul $t8, $t0, $t0
	
	li $v0,4
	la $a0,cad8
	syscall
	
	move $a0,$t8
	li $v0,1
	syscall
	
	li $v0,4
	la $a0,cad9
	syscall
	
	sll $s0,$t0,3
	
	move $a0,$s0
	li $v0,1
	syscall
	
	li $v0,4
	la $a0,cad10
	syscall

	lw $s1, datos
	lw $s2, datos+4
	
	div $s2,$s1
	
	mfhi $s3
	move $a0,$s3
	li $v0,1
	syscall
	
	li $v0,10
	syscall

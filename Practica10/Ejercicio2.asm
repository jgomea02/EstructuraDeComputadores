.data
question: .asciiz "Escriba un número: "
answer: .asciiz "La suma es: "
.text
.globl main
main:

li $v0,4
la $a0, question #Imprime la pregunta
syscall

li $v0, 5
syscall
move $t0, $v0  #lee un entero

li $t1, 0

li $t2, 1

bucle:

add $t1, $t1, $t2

addi $t2, $t2, 1

beq $t2 ,$t0, fin 

j bucle


fin:

add $t1, $t1, $t0

li $v0,4
la $a0, answer
syscall

li $v0, 1
move $a0, $t1
syscall

li $v0,10
syscall

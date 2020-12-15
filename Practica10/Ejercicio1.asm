.data
letra: .byte 'a'
question: .asciiz "Escriba una cadena:\n"
cadleida: .space 100
answer: .asciiz "Su cadena es:\n"
answer2: .asciiz "El numero de 'a' es: "
.text
.globl main
main:
li $v0, 4 	#Imprimo la pregunta
la $a0, question
syscall

li $v0,8	#Se lee una cadena por pantalla
la $a0,cadleida
li $a1,100
syscall

li $t0, 0	#Inicializa el contador a 0
la $t1, cadleida	#Crea un puntero a la primera letra

la $t3, letra
lb $t4,($t3)

bucle:

lb $t2, ($t1) 	#Leo una letra de la cadena

beq $t2, $zero, fin 	#Comprueba si ha llegado al final de la cadena "\0"

beq $t2, $t4, suma

addi $t1, $t1, 1	#Se desplaza el puntero una posicion (a la siguiente letra)

j bucle

suma:

addi $t0, $t0, 1	#Contador mas uno

addi $t1, $t1, 1	#Se desplaza el puntero una posicion (a la siguiente letra)

j bucle		#Vuelvo al incio del bucle

fin:
li $v0, 4	#Imprimo la respuesta
la $a0, answer
syscall


li $v0, 4	#Imprimo la cadena leida por teclado
la $a0, cadleida
syscall

li $v0, 4	#Imprimo la respuesta2
la $a0, answer2
syscall

move $a0, $t0
li $v0, 1	#Imprimo el contador
syscall

li $v0, 10	#Fin del programa
syscall

.data
mesg : .asciiz "Enter Your Array element \n"
array : .word 0 :1000
size : .word 5

arrrySize : .asciiz "Array size is : "
element : .asciiz "Input element "

.text 
.globl main

main :

li $v0,4
la $a0,arrrySize
syscall

li $v0,5
syscall
la $t0,size 
sw $v0,0($t0)

la $t0,array
lw $t1,size
li $t2,0

input_element :
bge $t2,$t1,input_end
li $v0,1
addi $a0,$t2,1
syscall
li $v0,5
syscall
sw $v0,0($t0)
addi $t0,$t0,4
addi $t2,$t2,1
j input_element

sorting :

la $t0,array
lw $t1,size
li $t2,1

loop : 

bge $t2,$t1,print_end
li $v0,1
lw $a0,0($t0)
syscall
li $v0,4
la $a0,space
syscall
addiu $t0,$t0,4
addiu $t2,$t2,1
j loop 

print_end :

li $v0,10
syscall

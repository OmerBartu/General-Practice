
addi $s0, $zero, 1
addi $s1, $zero, 1
addi $t1, $zero, 10


factorial:
slt $t0, $s1, $t1
beq $t0, 0, done
mult $s0, $s1
mflo $s0
addi $s1, $s1, 1
j factorial





done:
import math
import string

file_name = 'test.mem'
result_name = "instr_formated.mem"


with open(file_name) as file_object: # open file in a with statement
    instr = {}
    i = 0
    for line in file_object:  # iterate line by line
        instr[i] = line.strip()
        i += 1

        
f = open(result_name,"w")

for a in range(i):

    f.write(instr[a][6])
    f.write(instr[a][7])
    f.write(" ")

    f.write(instr[a][4])
    f.write(instr[a][5])
    f.write(" ")

    f.write(instr[a][2])
    f.write(instr[a][3])
    f.write(" ")

    f.write(instr[a][0])
    f.write(instr[a][1])

    f.write('\n')

f.close()
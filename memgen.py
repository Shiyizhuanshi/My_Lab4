import math
import string
f = open("data_mem.mem","w")
for i in range(256):
    v = int(math.cos(2*3.1416*i/256)*127+127)
    if (i+1)%16 == 0:
        s = "{hex:1X}\n"
    else:
        s = "{hex:1X} "

    for a in range(4):
        if a == 3: f.write(s.format(hex=v))
        elif s == "{hex:1X}\n" and a == 0:
            s = "{hex:1X} "
            f.write('\n')
            f.write(s.format(hex=0))
        else:
            s = "{hex:1X} "
            f.write(s.format(hex=0))

f.close()
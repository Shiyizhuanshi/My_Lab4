import math
import string
f = open("RegFile.mem","w")
for i in range(32):
    v = int(math.cos(2*3.1416*i/256)*127+127)
    if (i+1)%4 == 0:
        s = "{hex:2X}\n"
    else:
        s = "{hex:2X} "
    f.write(s.format(hex=0))

f.close()
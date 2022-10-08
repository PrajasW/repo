with open('this.txt') as f:
    str = f.read()

with open('copy.txt','w') as f:
    f.write(str)
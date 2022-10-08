with open('log.txt') as f:
    str = f.read()
status = False
if "" in str.lower():
    status = True

if(status == True):
    print("python in the log")
else:
    print("python not in the log")



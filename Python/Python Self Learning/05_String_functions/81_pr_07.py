
i=0
content = True
with open("log.txt") as f:

    while content:
        i+=1
        content = f.readline()
        if 'python' in content.lower():
            print(content)
            print(f"Yes python is present in line number {i}")
   
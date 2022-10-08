with open('poem.txt','r') as f:
    text = f.read()
word='twinkle'
if word in text:
    with open('poem.txt','a') as f:
        f.write(f"\n It contains {word} ")
    print(f"\n It contains {word} ")
else:
    with open('poem.txt','a') as f:
        f.write(f"\n It does not contain {word} ")
    print(f"\n It does not contain {word} ")
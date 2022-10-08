s = set()

s.add(20)
s.add("20")
s.add(20.0)

# surprizing as 20 and 20.0 is taken as same value
print(len(s))

 

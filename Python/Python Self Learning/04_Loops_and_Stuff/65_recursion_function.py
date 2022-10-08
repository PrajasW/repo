# E.g. to find factorial we know basic logic f(n)=n*f(n-1)

# using for loop
# n = 5
# fact=1
# for i in range(1,n+1):
#     fact=fact*i
# print(fact)

# same thing
def factorial_iter(n):
    fact = 1
    for i in range(1,n+1):
        fact=fact*i
    return fact
f = factorial_iter(5)
print(f)

# with recursion

def factorial_reccursive(n):

    if n==1 :
        return 1
    if n==0 :
        return 1
    
    return n*factorial_reccursive(n-1)
 



# What a begginer will do
# marks1 = [ 12,45,15,98 ]
# percentage1 = (sum(marks1)/400) *100
# marks2 = [ 62 , 59,20,10]
# percentage2 = (sum(marks2)/400) *100

# print(percentage1,percentage2)

# Use Functions
# How to define functions
# to call a function function()
def percent(marks):
    return(sum(marks)/len(marks))

marks1 = [12,45,15,98]
marks2 = [62,59,20,10]

# Alternate way
# percent1 = percent(marks1)
# percent2 = percent(marks2)

print(percent(marks1),percent(marks2))


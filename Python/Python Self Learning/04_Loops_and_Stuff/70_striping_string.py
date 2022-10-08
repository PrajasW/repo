# strip function removes the extra spaces

def removeandstrip(string,word):
    newStr = string.replace(word,"")
    return newStr.strip()


this = "       subete no ymir no tachi ore no nawa eren yeager        "

print(removeandstrip(this,"no"))
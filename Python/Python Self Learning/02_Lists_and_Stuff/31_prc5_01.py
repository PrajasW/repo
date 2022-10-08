from re import M


myDict = {
    "khana":"Food",
    "mummy":"Mother",
    "papa":"Father",
    "chacha":"Uncle"
}

print("Options are:",myDict.keys())
a = input("Enter word to search:")

print("The meaning of the word is:",myDict.get(a))
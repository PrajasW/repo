from turtle import update


myDict = {
    "fast":"in a quick manner",
    "prajas":"Otaku ",
    "marks":[2,5,6,2,5],
    "anotherdict":{'Prajas':'Marks'},
    1:2
}

print(myDict.keys()) #To print the keys of dictionary

# It is not a list it is a class dict_keys
print(type(myDict.keys()))
# to convert to list and output
print(list(myDict.keys())) 

print(myDict.values()) #To print the keys of dictionary

print(myDict.items()) #To print dictionary in form of a list (itterable)
# (key,value) form for all content


# Updating Dictionary
print(myDict)

updateDict={
    "Attack on Titan":"Shinkegi no kyojin",
    "Chuunibyou":"Anime",
    "Kimitsu no yaiba":"Anime",
    "Ore no imotou wa konanki kawaii wake ga nai":"Anime",
    "prajas":"weeb" #will update the already present keys

}

myDict.update(updateDict)
print(myDict)

# IMPORTANT INTERVIEW QUESTION

print(myDict.get("prajas")) #It prints value associated with key "prajas"
print(myDict["prajas"]) #It prints value associated with key "prajas"


print(myDict.get("prajas3")) #It will not throw a error if the key is not present but will return "None" 
print(myDict["prajas3"]) #It will throw a error if the key is not present

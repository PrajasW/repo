# Author: Me
# Note: you can add more keywords to the this program by adding them in similar syntax

spamKeywords = ["make a lot of money","buy now","subscribe to this","click this"]
comment = input("Enter the comment:")
# for case independent detection
commentLowerCase = comment.lower()

spamKeywordsLength = len(spamKeywords)
i=0
spam=False
while(i<spamKeywordsLength):
    if(spamKeywords[i] in commentLowerCase):
        spam=True
        break
    i = i+1

if(spam==True):
    print("Your comment is deleted")
else:
    print("Thank you for commenting")
    
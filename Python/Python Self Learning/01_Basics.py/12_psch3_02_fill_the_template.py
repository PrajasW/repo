letter = '''Dear <|NAME|>
Greetings from Mappa Animation
I'm happy to tell you about your selection
You are Selected!
Have a great day ahead
Thanks and regards,
Eren Yeager
Date: <|DATE|>'''

name=input("Enter Your Name:")
date=input("Enter Date:")

letter=letter.replace("<|NAME|>",name)
letter=letter.replace("<|DATE|>",date)

print(letter)
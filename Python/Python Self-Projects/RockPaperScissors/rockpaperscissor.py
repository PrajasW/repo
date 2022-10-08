# >>Rock Paper Scissors v2.0<< 

# game(userChoise,compChoise) [DONE]
# resultDisplay(winCondition) [DONE]
# rules() [DONE]
# filter() [DONE]
# userInput() [DONE]
# compInput() [DONE]
# displayResult() [DONE]
# startGame() [DONE]
# ..> if(invalid) [DONE]
# ..> if(yes) [DONE]
# ..> if(no) [DONE]
# Game runs as expected
# {issue} : After Choosing invalid value , entering invalid value dosne't return correct userInput()


import random
import time

timesPlayed = 0

def game(userChoice,compChoise):

    if(userChoice == 'r'):
        if(compChoise =='r'):
            return None
        if(compChoise =='p'):
            return False
        if(compChoise =='s'):
            return True
    if(userChoice == 'p'):
        if(compChoise =='r'):
            return True
        if(compChoise =='p'):
            return None
        if(compChoise =='s'):
            return False
    if(userChoice == 's'):
        if(compChoise =='r'):
            return False
        if(compChoise =='p'):
            return True
        if(compChoise =='s'):
            return None

def resultDisplay(winCondition):
    if(winCondition == True):
        print("You Win\n")
    if(winCondition == False):
        print("You Lose\n")
    if(winCondition == None):
        print("It's a Draw\n")

def rules():
    print(''' ### Rules Of The Game ### 
    1. You Have To Chose Rock(R) Paper(P) Or Scissors(S)
    2. Rock,Paper,Scissor beats Scissor,Rock,Paper respectively
    3. You play against the Computer (Choise of Computer is Random)''')

def filter(char):
    if(char == 'r'):
        return "Rock"
    if(char == 'p'):
        return "Paper"
    if(char == 's'):
        return "Scissor"

validChoise = ['r','p','s']

def userInput():
    global validChoise
    userSays = input("What do you choose? ")
    userSaysKeyword = userSays[0].lower()
    
    if(userSaysKeyword not in validChoise):
        print("Invalid Choise")
        # print(userSays," ",userSaysKeyword)
        userInput()
    elif(userSaysKeyword in validChoise):
        # print(userSays)
        print(f"You chose {filter(userSays[0].lower())}")
        userSaysKeyword = userSays[0].lower()
        return userSays[0].lower()
    
    return False 

def compInput():
    global validChoise
    randValue = random.randint(1,3)
    if randValue == 1:
        print("Computer chose Rock")
        return validChoise[0]
    elif randValue == 2:
        print("Computer chose Paper")
        return validChoise[1]
    elif randValue == 3:
        print("Computer chose Scissor")
        return  validChoise[2]
    
    
def startGame():
    global timesPlayed #This is needed to bypass UnboundLocalError
    playStatusInput = input("Would You like to play the game? (Y/N) : ")
    playStatusInput = playStatusInput.lower()
    playStatus = playStatusInput[0]
    if(playStatus != "y" and playStatus != "n"):
        print("Invalid Input")
        startGame()
    if(playStatus == "y"):
        if(timesPlayed == 0):
            rules()
        userChoise = userInput()
        compChoise = compInput()
        gameResult = game(userChoise,compChoise)
        resultDisplay(gameResult)
        timesPlayed += 1
        startGame()
    if(playStatus == "n"):
        if(timesPlayed!=0):
            print("Thank You For Playing!!")
            time.sleep(3)
        exit()

# to start the game :)
startGame()




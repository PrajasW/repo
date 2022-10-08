# Bank --v1.1 [Basic Template]
# The next version will contain the main code this is just a template
# of how the bank functions
# New program dosen't use class
# Functions approach


from genericpath import exists
from imghdr import what
import os

runTime = 0
taskName = ''
taskAction = ''
taskType = ''
taskDo = ''
taskValue = 0




with open('Balance.txt') as f:
    totalBalance = int(str(f.read()))


def confirmAction(action):
    key = input(f"Confirm {action}?:").lower()
    if(key == 'no' or key == 'n'):
        print(f"Undoing {action}")
        mainScreen()
    if(key == 'yes' or key == 'y'):
        pass 
    if(key not in ['yes','no','n','y']):
        print('Invalid Choise')
        confirmAction(action)

def refreshBalance():
    global totalBalance
    with open('Balance.txt') as f:
        totalBalance = int(str(f.read()))

def updateBalance(newBalance):
    global totalBalance
    totalBalance = newBalance

def earn():
    taskDone = input('What did you do?:')
    if(not exists(f'{taskDone}.txt')):
        print(f'{taskDone} is not a valid job')
        mainScreen()
    
    
    

def spend():
    pass

def logcheck():
    pass

def writeIn(name):
    with open(f'shop\\{name}.txt','w') as f:
        f.write(name)

def appendIn(name,word):
    with open(f'shop\\{name}.txt','a') as f:
        f.write('\n'+word)

def checkIfValidChoice(data,validKeys):
    if(data not in validKeys ):
        print("Invalid Choise")
        mainScreen()
        return False
    else:
        return True

def add():
    keepRunning = True
    print("running add")
    
    name = input("Name: ").lower()
    writeIn(name)
    
    action = input("Action: ").lower()
    appendIn(name,action)
    
    unitORtime = input("Unit/Time: ").lower()
    keepRunning = checkIfValidChoice(unitORtime,['unit','time'])
    if(keepRunning == False):
        os.remove(f'shop\\{name}.txt')
        mainScreen()
    appendIn(name,unitORtime)

    earnORspend = input("Earn/Spend: ").lower()
    keepRunning = checkIfValidChoice(earnORspend,['earn','spend'])
    if(keepRunning == False):
        os.remove(f'shop\\{name}.txt')
        mainScreen()
    appendIn(name,earnORspend)

    
    valueLinked = input(f"How much {earnORspend} per {unitORtime}: ")
    keepRunning = valueLinked.isdigit()
    if(keepRunning == False):
        os.remove(f'shop\\{name}.txt')
        mainScreen()
    appendIn(name,valueLinked)

def remove():
    print("#running delete")
    name = input("Name: ").lower()
    if(not exists(f'shop\\{name}.txt')):
        print(f'File {name} does not exist')
        mainScreen()
    else:
        confirmAction('remove')
        os.remove(f'shop\\{name}.txt')
        print(f'{name} deleted from Shop')



def edit():
    whatToDo = input("Add/Remove to Shop:").lower()
    if checkIfValidChoice(whatToDo,['add','remove','a','r']) == False:
        print('Invalid Choise')
        mainScreen()
    if (whatToDo == 'add' or whatToDo == 'a'):
        add()
    if(whatToDo == 'remove' or whatToDo == 'r'):
        remove()

    

def mainScreen():
    global runTime
    refreshBalance()
    if(runTime ==0 ):
        print(f"## Welcome To Kawai Bank ##\n\nYour Current Balance is: ¥{totalBalance}\n")
        runTime = runTime + 1
        whatToDo = input("What do you want to do? :")
    else:
        print(f"\nCurrent Balance:{totalBalance}\n")
        whatToDo = input("Next Task:")
    
    checkIfValidChoice(whatToDo,['deposit','d','spend','s','exit','edit','log','logcheck','l'])
    if(whatToDo == 'deposit' or whatToDo == 'd'):
        earn()
        mainScreen()
    if(whatToDo == 'spend' or whatToDo == 's'):
        spend()
        mainScreen()
    if(whatToDo == 'exit'):
        exit()
    if(whatToDo in ['log','logcheck','l']):
        logcheck()
    if(whatToDo == 'edit'):
        edit()
        mainScreen()
        

# Testing

mainScreen()
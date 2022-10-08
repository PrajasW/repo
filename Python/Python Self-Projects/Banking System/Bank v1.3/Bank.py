# Bank --v1.3

# ?? Functions Used ??

# # >>HELPING FUNCTIONS<<
# refreshBalance() [DONE]
# updateBalance()
# checkIfValidChoice() [DONE] 
# confirmAction() [DONE]
# fetchShopData() [DONE]
# checkIfShopExistsFor()
# AppendIn()
# WriteIn() 

# # >>TASK MANAGING FUNCTIONS<<
# mainScreen() [DONE]
# edit() [DONE]
# ..> add() [WIP]
# ..> remove() [WIP]
# calcBalance() [DONE]
# logfile() [WIP]








from datetime import datetime
from genericpath import exists


now = datetime.now()
firstRun = True
taskName = ''
taskAction = ''
taskType = ''
taskCount = ''
taskValue = 0
totalBalance = 0

def refreshBalance():
    global totalBalance
    with open('Balance.txt') as f:
        totalBalance = int(str(f.read()))

def updateBalance():
    global totalBalance
    with open('Balance.txt','w') as f:
        f.write(str(totalBalance))

def checkIfValidChoice(data,validKeys):
    if(data not in validKeys ):
        print("Invalid Choice")
        mainScreen()
    else:
        pass

def confirmAction(action):
    key = input(f"Confirm {action}?:").lower()
    if(key not in ['yes','no','n','y']):
        print('Invalid Choise')
        confirmAction(action)
    if(key == 'no' or key == 'n'):
        print(f"Undoing {action}")
        mainScreen()
    if(key == 'yes' or key == 'y'):
        pass 

def checkIfShopExistsFor(name):

    if(not exists(f'shop\\{name}.txt')):
        return False
    else:
        return True

def fetchShopData(name):
    global taskName
    global taskAction
    global taskType
    global taskCount
    global taskValue

    with open(f'Shop\\{name}.txt') as f:
        taskName = str(f.readline())
        taskAction = str(f.readline())
        taskCount = str(f.readline())
        taskType = str(f.readline())
        taskValue = int(str(f.readline()))



def calcBalance():
    global totalBalance
    money = 0
    factor = 0
    task = input('What did you do?: ').lower()
    
    if (checkIfShopExistsFor(task) is False):
        print(f'{task} is not valid')
        mainScreen()
    
    fetchShopData(task)
    if('unit' in taskCount):
        factor = int(input(f'Enter How many {taskAction}: '))
    if('time' in taskCount):
        factor = int(input(f'Enter How many hours you {taskAction}: '))

    if('spend' in taskType):
        money = -factor*taskValue
    if('earn' in taskType):
        money = factor*taskValue
    
    confirmAction(taskAction)
    totalBalance = totalBalance + money
    updateBalance()
    updateLogfile()

def updateLogfile():

    global now
    nowDate = now.strftime("%d_%m_%y")
    nowDateAndYear = now.strftime('%d %B, %Y')
    nowTime = now.strftime('[%H:%M]')
    if(not exists(f'logfiles/P{nowDate}.txt')):
        with open(f'logfiles/{nowDate}.txt','w') as f:
            f.write(f'{nowDateAndYear} \n')
    
    with open(f'logfiles/{nowDate}.txt','a') as f:
        if(taskType == 'earn'):
            f.write(f'\n{nowTime}\tearns\t¥{taskValue}\ton\t{taskAction}')
        if(taskType == 'spend'):
            f.write(f'\n{nowTime}\spends\t¥{taskValue}\ton\t{taskAction}')
    
    




def edit():
    editMode = input("Add or Remove? ").lower()
    checkIfValidChoice(editMode,['add','remove'])
    if('add' in editMode):
        add()
    if('remove' in editMode):
        remove()

def createPath(name):
    with open(f'shop/{name}.txt','w') as f:
        f.write(name)

def appendPath(name,thing):
    with open(f'shop/{name}.txt','a') as f:
        f.write('\n'+thing)


def add():
    global taskName
    global taskAction
    global taskType
    global taskCount
    global taskValue

    taskName = input('Enter Name: ').lower()
    if checkIfShopExistsFor(taskName) == True:
        print(f'Shop for {taskName} Already Exists')
        confirmAction('Overwrite Data? ')
    createPath(taskName)

    taskAction = input('Enter Action: ').lower()
    appendPath(taskName,taskAction)

    getTaskCount()
    appendPath(taskName,taskCount)

    getTaskType()
    appendPath(taskName,taskType)

    getTaskValue()
    appendPath(taskName,str(taskValue))
    
def getTaskCount():
    global taskCount
    temp = input('TaskCount: ').lower()
    if(temp not in ['unit','time']):
        print('Please Enter a unit/time')
        getTaskCount()
    taskCount = temp
   
def getTaskType():
    global taskType
    temp = input('taskType: ').lower()
    if(temp not in ['earn','spend']):
        print('Please Enter a earn/spend')
        getTaskType()
    taskType = temp

def getTaskValue():
    global taskValue
    temp = input('TaskValue: ')
    if(temp.isdigit() == False):
        print('Please Enter a Digit')
        getTaskValue()
    taskValue = int(temp)

def getTaskValue():
    global taskValue
    temp = input('TaskValue: ')
    if(temp.isdigit() == False):
        print('Please Enter a Digit')
        getTaskValue()
    taskValue = int(temp)



def remove():
    print('remove is not defeined')
def logfile():
    print('logfile is not defined')

def mainScreen():
    global now
    now = datetime.now()
    global firstRun
    refreshBalance()
    if(firstRun == True):
        print(f"##WELCOME TO KAWAI BANK##\n\nYour Current Balance is ¥{totalBalance}\n")
        firstRun = False
    else:
        print(f'\nYour Current Balance is ¥{totalBalance}\n')
    task = input("Enter Task:").lower()
    checkIfValidChoice(task,['edit','transaction','t','log','exit'])
    
    if(task in ['edit']):
        edit()
    if(task in ['transaction','t']):
        calcBalance()
    if(task in ['log']):
        logfile()
    if(task == 'exit'):
        exit()
    
    mainScreen()


mainScreen()

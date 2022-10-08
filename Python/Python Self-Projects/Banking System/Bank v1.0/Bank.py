# Bank --v0.1
# many errors will come back to it later

# to define the variable
with open('internal/Balance.txt') as file:
    totalBalance = int(str(file.read()))


# fetching totalBalance from internal memory
def refreshBalance():
    global totalBalance
    with open('internal/Balance.txt') as file:
        totalBalance = int(str(file.read()))

# changing totalBalance
def changeBalanceBy(money):
    global totalBalance
    totalBalance = totalBalance + int(money)
    with open('internal/Balance.txt','w') as file:
        file.write(str(totalBalance))

# to print Balance
def printBalance():
    global totalBalance
    print(f"The current Balance is ¥{totalBalance}")

class TimeItem:
    global totalBalance
    itemCostPerTime = 0
    itemIncomePerTime = 0
    

    def setCost(self,cost):
        self.itemCostPerTime = cost
    def setIncome(self,income):
        self.itemIncomePerTime = income
    def calculateCost(self):
        time = int(input("Enter the Time(hrs) you performed:"))
        changeBalanceBy(-time*self.itemCostPerTime)
        refreshBalance()
    def calculateIncome(self):
        time = int(input("Enter the Time(hrs) you performed:"))
        changeBalanceBy(time*self.itemIncomePerTime)
        refreshBalance()
    
class UnitItem:
    global totalBalance
    itemCostPerUnit = 0
    itemIncomePerUnit = 0
    
    def setCost(self,cost):
        self.itemCostPerUnit = cost
    def setIncome(self,income):
        self.itemIncomePerunit = income
    def calculateCost(self):
        unit = int(input("Enter how many you consumed:"))
        changeBalanceBy(-unit*self.itemCostPerUnit)
        refreshBalance()
    def calculateIncome(self):
        unit = int(input("Enter how many you performed:"))
        changeBalanceBy(unit*self.itemIncomePerUnit)
        refreshBalance()

def mainScreen():
    pass




# TESTING

# study = TimeItem()
# study.setIncome(75)
# print(f"¥{study.itemIncomePerTime}")
# study.calculateIncome()
# printBalance()

xyz = TimeItem
xyz.setCost(20)
print(f"¥{xyz.itemCostPerTime}")
# xyz.calculateCost()
# printBalance()










class RailwayForm:
    formType =  "Railway Form"
    def printData(self):
        print(f"Name of Passanger is {self.name}")
        print(f"Train is {self.train}")

prajasApplication = RailwayForm()

prajasApplication.name = 'Prajas'
prajasApplication.train = 'Kharghar --> Seawood Grand Central'
prajasApplication.printData()

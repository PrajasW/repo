class Remote:
    pass

class Player:
    def moveRight(self):
        pass
    def moveLeft(self):
        pass
    def moveForward(self):
        pass

# object creation
remote1 = Remote()
player1 = Player()

if(remote1.isRightPressed):
    player1.moveRight

if(remote1.isLeftPressed):
    player1.moveLeft
    
if(remote1.isForwardPressed):
    player1.moveForward
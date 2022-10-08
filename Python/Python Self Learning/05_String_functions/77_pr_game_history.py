score = 420

def game():
    return score

with open('highscore.txt') as f:
    highscore = int(f.read())

if highscore<score:
    with open('highscore.txt','w') as f:
        f.write(str(score))
 
if highscore=='':
    with open('highscore.txt','w') as f:
        f.write(str(score))